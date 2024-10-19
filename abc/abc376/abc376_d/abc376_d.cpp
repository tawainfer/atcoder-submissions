#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<set<ll>> g(n + 1);
  vector<set<ll>> rg(n + 1);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].insert(b);
    rg[b].insert(a);
  }

  vector<ll> drg(n + 1, INF);
  drg[1] = 0;
  queue<ll> q;
  q.push(1);
  while(!q.empty()) {
    ll cp = q.front();
    q.pop();
    
    for(int ep : rg[cp]) {
      if(drg[ep] == INF) {
        drg[ep] = drg[cp] + 1;
        q.push(ep);
      }
    }
  }

  vector<ll> dg(n + 1, INF);
  dg[1] = 0;
  q.push(1);
  while(!q.empty()) {
    ll cp = q.front();
    q.pop();
    
    for(int ep : g[cp]) {
      if(dg[ep] == INF) {
        dg[ep] = dg[cp] + 1;
        q.push(ep);
      }
    }
  }

  ll ans = INF;
  for(int i = 2; i <= n; i++) {
    ans = min(dg[i] + drg[i], ans);
  }

  cout << (ans >= INF ? -1 : ans) << endl;
  // for(auto x : dg) cout << x << " ";
  // cout << endl;
  // for(auto x : drg) cout << x << " ";
  // cout << endl;
}