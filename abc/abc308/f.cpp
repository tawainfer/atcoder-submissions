// https://atcoder.jp/contests/abc308/submissions/43321850

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  multiset<ll> p;
  ll ans = 0;

  ll t;
  for(int i = 0; i < n; i++) {
    cin >> t;
    p.insert(t);
    ans += t;
  }

  vector<ll> l(m), d(m);
  for(ll &z : l) cin >> z;
  for(ll &z : d) cin >> z;

  vector<pair<ll, ll>> c;
  for(int i = 0; i < m; i++) c.push_back(make_pair(d[i], i));
  sort(c.begin(), c.end());
  reverse(c.begin(), c.end());

  for(auto z : c) {
    ll discount = z.first;
    ll idx = z.second;

    auto iter = p.lower_bound(l[idx]);
    if(iter == p.end()) continue;
    
    ans -= discount;
    p.erase(iter);
  }

  cout << ans;
  return 0;
}
