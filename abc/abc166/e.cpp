// https://atcoder.jp/contests/abc166/submissions/45115511

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  map<ll, ll> m;
  ll ans = 0;
  for(ll i = 0; i < n; i++) {
    ans += m[i - a[i]]; 
    m[i + a[i]]++;
  }

  cout << ans;
  return 0;
}
