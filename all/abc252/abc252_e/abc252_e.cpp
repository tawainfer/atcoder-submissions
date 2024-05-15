#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  ll a, b, c;
  vector<ll> g[200009];
  map<pair<ll, ll>, ll> cost;
  map<pair<ll, ll>, ll> idx;

  for(ll i = 1; i <= m; i++) {
    cin >> a >> b >> c;
    g[a].push_back(b);
    g[b].push_back(a);
    cost[make_pair(a, b)] = c;
    cost[make_pair(b, a)] = c;
    idx[make_pair(a, b)] = i;
    idx[make_pair(b, a)] = i;
  }

  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
  q.push(make_pair(0, 1));

  vector<ll> cnt(200009, INF);
  cnt[1] = 0;

  int last_pos;
  vector<pair<ll, ll>> prev(200009, make_pair(-1, -1)); // node, path
  while(!q.empty()) {
    ll cc = q.top().first;
    ll cp = q.top().second;
    last_pos = cp;
    q.pop();
    if(cnt[cp] < cc) continue;

    for(auto ep : g[cp]) {
      if(cnt[ep] <= cc + cost[make_pair(cp, ep)]) continue;
      
      prev[ep] = make_pair(cp, idx[make_pair(cp, ep)]);
      cnt[ep] = cc + cost[make_pair(cp, ep)];
      q.push(make_pair(cnt[ep], ep));
    }
  }

  // for(int i = 1; i <= n; i++) {
  //   cout << prev[i].first << " " << prev[i].second << endl;
  // }
  // cout << endl;

  for(int i = 2; i <= n; i++) {
    if(prev[i].first != -1) cout << prev[i].second << " ";
  }
}