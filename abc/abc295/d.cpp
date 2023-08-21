// https://atcoder.jp/contests/abc295/submissions/44812311

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  map<ll, ll> m;
  m[0] = 1;
  ll x = 0;
  for(ll i = 0; i < s.size(); i++) {
    x ^= (1 << (ll)(s[i] - '0'));
    m[x]++;
  }

  ll ans = 0;
  for(auto p : m) {
    ans += p.second * (p.second - 1) / 2;
  }

  cout << ans;
  return 0;
}
