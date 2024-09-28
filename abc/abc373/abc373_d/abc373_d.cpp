#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<set<ll>> g(n + 1);
  map<pair<ll, ll>, ll> cost;
  for(int i = 0; i < m; i++) {
    ll u, v, w;
    cin >> u >> v >> w;
    g[u].insert(v);
    g[v].insert(u);
    cost[make_pair(u, v)] = w;
    cost[make_pair(v, u)] = -w;
  }

  vector<ll> ans(n + 1, INF);
  for(int i = 1; i <= n; i++) {
    if(ans[i] != INF) continue;
    ans[i] = 0;

    queue<ll> q;
    q.push(i);
    while(!q.empty()) {
      ll cp = q.front();
      q.pop();

      for(auto ep : g[cp]) {
        if(ans[ep] != INF) continue;
        ans[ep] = cost[make_pair(cp, ep)] + ans[cp];
        q.push(ep);
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
}