#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<set<ll>> g(n + 1);
  map<pair<ll, ll>, ll> cost;
  for(int i = 1; i <= m; i++) {
    ll u, v, b;
    cin >> u >> v >> b;
    g[u].insert(v);
    g[v].insert(u);
    cost[make_pair(u, v)] = b;
    cost[make_pair(v, u)] = b;
  }

  priority_queue<vector<ll>, vector<vector<ll>>, greater<vector<ll>>> pq;
  pq.push({a[1], 1});
  vector<ll> ans(n + 1, INF);
  ans[1] = a[1];

  while(!pq.empty()) {
    ll cc = pq.top()[0];
    ll cp = pq.top()[1];
    pq.pop();
    if(cc > ans[cp]) continue;
    
    for(auto ep : g[cp]) {
      if(ans[cp] + cost[make_pair(cp, ep)] + a[ep] >= ans[ep]) continue;
      ans[ep] = ans[cp] + cost[make_pair(cp, ep)] + a[ep];
      pq.push({ans[ep], ep});
      // cout << "cp:ep " << cp << ":" << ep << endl;
    }
  }

  for(int i = 2; i <= n; i++) {
    cout << ans[i] << " ";
  }
}