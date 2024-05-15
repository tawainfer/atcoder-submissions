#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<set<ll>> g(n + 1);
  map<pair<ll, ll>, ll> cost;

  for(ll i = 0; i < m; i++) {
    ll a, b, c;
    cin >> a >> b >> c;
    g[a].insert(b);
    g[b].insert(a);
    cost[make_pair(a, b)] = c;
    cost[make_pair(b, a)] = c;
  }

  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
  pq.push(make_pair(0, 1));

  vector<ll> mc(n + 1, INF);
  while(!pq.empty()) {
    ll cc = pq.top().first;
    ll cp = pq.top().second;
    pq.pop();
    if(mc[cp] < cc) continue;

    for(ll ep : g[cp]) {
      ll ec = cc + cost[make_pair(cp, ep)];
      if(mc[ep] > ec) {
        mc[ep] = ec;
        pq.push(make_pair(ec, ep));
      }
    }
  }

  vector<ll> ans;
  queue<ll> q;
  q.push(n);

  while(!q.empty()) {
    ll cp = q.front();
    ans.push_back(cp);
    q.pop();

    for(ll ep : g[cp]) {
      if(mc[cp] - cost[make_pair(cp, ep)] == mc[ep]) {
        q.push(ep);
        break;
      }
    }
  }

  ans.push_back(1);
  reverse(ans.begin(), ans.end());
  for(ll x : ans) cout << x << " ";
  return 0;
}