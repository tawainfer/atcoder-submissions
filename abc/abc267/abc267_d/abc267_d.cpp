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
    if(v[i]) for(int j = 2; i * j <= c; j++) v[i * j] = false;
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

  ll n, m;
  cin >> n >> m;

  vector<ll> a(n);
  fore(z, a) cin >> z;

  ll dp[2009][2009]; // i番目にBjを選ぶときの最大値(m, n)
  rep(i, 0, 2009) rep(j, 0, 2009) dp[i][j] = -1e18;

  ll ma[2009][2009];
  rep(i, 0, 2009) rep(j, 0, 2009) dp[i][j] = -1e18;

  rep(i, 0, m) {
    rep(j, 0, n) {
      if(i == 0) {
        dp[i][j] = a[j];

        if(j == 0) ma[i][j] = dp[i][j];
        else ma[i][j] = max(ma[i][j - 1], dp[i][j]);
      } else {
        ll x = a[j] * (i + 1);

        if(j < i) continue;
        else if(i == j) {
          dp[i][j] = ma[i - 1][j - 1] + x;
          ma[i][j] = dp[i][j];
        } else {
          dp[i][j] = ma[i - 1][j - 1] + x;
          ma[i][j] = max(ma[i][j - 1], dp[i][j]);
        }
      }
    }
  }

  ll ans;
  lower(ans);

  rep(i, 0, n) ans = max(ans, dp[m - 1][i]);
  cout << ans;
  return 0;
} 