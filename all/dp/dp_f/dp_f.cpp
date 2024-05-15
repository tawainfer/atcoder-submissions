#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define ll long long
#define nextp next_permutation
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
#define ull unsigned ll
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }
template<class T> vector<T> divisor_enumeration(T &a) {
  vector<T> v;
  for(T i = 1; i * i <= a; i++) {
    if(a % i != 0) continue;
    v.push_back(i);
    if(i != a / i) v.push_back(a / i);
  }
  sort(v.begin(), v.end());
  return v;
}
template<class T> vector<T> prime_factorization(T a) {
  vector<T> v;
  for(T i = 2; i * i <= a; i++) {
    while(a % i == 0) {
      a /= i;
      v.push_back(i);
    }
  }
  if(a >= 2) v.push_back(a);
  return v;
}
template<class T> vector<bool> eratosthenes(T &a) { // 2e8 + 9
  long long b = a;
  b = min(b, 200000009LL);
  int c = b;
  vector<bool> v(c + 1, true);
  v[0] = false;
  v[1] = false;
  for(int i = 2; i * i <= c; i++) {
    if(v[i]) {
      for(int j = 2; i * j <= c; j++) v[i * j] = false;
    }
  }
  return v;
}

/*

  @tawainfer

  2021-09-04 Gray
  2022-03-19 Brown
  2022-08-27 Green

  ξ(･_･)ξ I'll do my best! ξ(･_･)ξ

*/

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s, t;
  cin >> s >> t;

  int dp[s.size()][t.size()];
  rep(i, 0, s.size()) rep(j, 0, t.size()) dp[i][j] = 0;

  rep(i, 0, s.size()) {
    rep(j, 0, t.size()) {
      if(i == 0 && j == 0) {
        if(s[i] == t[j]) dp[i][j] = 1;
      } else if(i == 0) {
        if(s[i] == t[j]) dp[i][j] = 1;
        else dp[i][j] = dp[i][j - 1];
      } else if(j == 0) {
        if(s[i] == t[j]) dp[i][j] = 1;
        else dp[i][j] = dp[i - 1][j];
      } else {
        if(s[i] == t[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
        else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  int i = s.size() - 1, j = t.size() - 1;
  //int last = 1e9;
  string ans = "";

  while(i != 0 && j != 0) {
    if(dp[i - 1][j] == dp[i][j - 1] && dp[i - 1][j] == dp[i][j] - 1) {
      ans += s[i];
      //cout << i << " " << j << " " << endl;
      //last = dp[i][j];
      i--;
      j--;
    } else {
      if(dp[i - 1][j] < dp[i][j - 1]) j--;
      else i--;
    }
  }

  if(dp[i][j] != 0) {
    if(i == 0) {
      while(!(i == 0 && j == 0)) {
        if(dp[i][j - 1] == 0) {
          ans += s[i];
          break;
        }
        j--;
      }
    } else {
      while(!(i == 0 && j == 0)) {
        if(dp[i - 1][j] == 0) {
          ans += s[i];
          break;
        }
        i--;
      }
    }
    if(i == 0 && j == 0) ans += s[i];
  }

  reverse(all(ans));
  cout << ans;
  return 0;
}