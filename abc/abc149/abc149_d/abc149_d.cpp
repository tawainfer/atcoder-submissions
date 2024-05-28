#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
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
template <class T> bool chmin(T& a, T& b) { return a > b ? (a = b, 1) : 0; }
template <class T> bool chmax(T& a, T& b) { return a < b ? (a = b, 1) : 0; }
template <class T> void lower(T& a) { a = numeric_limits<T>::min(); }
template <class T> void upper(T& a) { a = numeric_limits<T>::max(); }
template <class T> vector<T> divisor_enumeration(T& a) {
  vector<T> v;
  for(T i = 1; i * i <= a; i++) {
    if(a % i != 0) continue;
    v.push_back(i);
    if(i != a / i) v.push_back(a / i);
  }
  sort(v.begin(), v.end());
  return v;
}
template <class T> vector<T> prime_factorization(T a) {
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
template <class T> vector<bool> eratosthenes(T& a) { // 2e8 + 9
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

  int n, k, r, s, p;
  string t;
  cin >> n >> k >> r >> s >> p >> t;

  string u = "";
  int ans = 0;

  rep(i, 0, n) {
    if(i < k) {
      if(t[i] == 'r') {
        ans += p;
        u += 'p';
      }
      if(t[i] == 's') {
        ans += r;
        u += 'r';
      }
      if(t[i] == 'p') {
        ans += s;
        u += 's';
      }
    } else {
      if(t[i] == 'r') {
        if(u[i - k] == 'p') {
          u += '?';
        } else {
          u += 'p';
          ans += p;
        }
      }
      if(t[i] == 's') {
        if(u[i - k] == 'r') {
          u += '?';
        } else {
          u += 'r';
          ans += r;
        }
      }
      if(t[i] == 'p') {
        if(u[i - k] == 's') {
          u += '?';
        } else {
          u += 's';
          ans += s;
        }
      }
    }

    //cout << i << " " << ans << endl;
  }

  cout << ans;
  return 0;
}