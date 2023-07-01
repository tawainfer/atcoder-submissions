// https://atcoder.jp/contests/abc275/submissions/36082984

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll mod = 998244353;
  ll a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  ll x = ((a % mod) * (b % mod)) % mod;
  x = (x * (c % mod)) % mod;
  ll y = ((d % mod) * (e % mod)) % mod;
  y = (y * (f % mod)) % mod;
  ll ans = (x + mod - y) % mod;

  cout << ans;
  return 0;
}
