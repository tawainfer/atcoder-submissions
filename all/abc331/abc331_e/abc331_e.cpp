#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m, l;
  cin >> n >> m >> l;

  vector<ll> a(n + 1), b(m + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int i = 1; i <= m; i++) cin >> b[i];

  vector<set<ll>> bad(n + 1);
  for(int i = 0; i < l; i++) {
    ll c, d;
    cin >> c >> d;
    bad[c].insert(d);
  }

  multiset<ll> prices;
  for(ll x : b) {
    prices.insert(x);
  }

  ll ans = -INF;
  for(int i = 1; i <= n; i++) {
    vector<ll> tmp;
    for(auto idx : bad[i]) {
      tmp.push_back(b[idx]);
      prices.erase(prices.find(b[idx]));
    }

    if(prices.size() >= 1) {
      auto iter = prices.end();
      iter--;
      ans = max(ans, a[i] + (*iter));
    }

    for(auto x : tmp) {
      prices.insert(x);
    }
  }

  cout << ans;
}