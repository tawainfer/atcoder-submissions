// https://atcoder.jp/contests/abc307/submissions/43475506

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 998244353;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> f(1000009);
  f[2] = m * (m - 1) % MOD;

  ll p = m - 1;
  for(int i = 3; i < f.size(); i++) {
    p = (p * (m - 1)) % MOD;
    f[i] = (m * p - f[i - 1]) % MOD;
  }

  cout << f[n];
  return 0;
}
