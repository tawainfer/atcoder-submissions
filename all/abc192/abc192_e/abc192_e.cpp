#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 4e18;

ll req_t(ll cc, ll t, ll k) {
  return cc + (cc % k == 0 ? 0 : k - cc % k) + t;
}

int main() {
  ll n, m, x, y;
  cin >> n >> m >> x >> y;

  vector<ll> g[n + 1];
  map<pair<ll, ll>, vector<pair<ll, ll>>> tk;
  
  ll a, b, t, k;
  for(ll i = 0; i < m; i++) {
    cin >> a >> b >> t >> k;
    g[a].push_back(b);
    g[b].push_back(a);
    tk[make_pair(a, b)].push_back(make_pair(t, k));
    tk[make_pair(b, a)].push_back(make_pair(t, k));
  }

  vector<ll> min_t(n + 1, INF);
  min_t[x] = 0;
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
  pq.push(make_pair(0, x));

  while(!pq.empty()) {
    ll cc = pq.top().first;
    ll cp = pq.top().second;
    pq.pop();
    if(min_t[cp] < cc) continue;

    for(auto ep : g[cp]) {
      ll min_req_t = INF;
      for(auto [t, k] : tk[make_pair(cp, ep)]) min_req_t = min(min_req_t, req_t(cc, t, k));
      if(min_t[ep] <= min_req_t) continue;

      min_t[ep] = min_req_t;
      pq.push(make_pair(min_t[ep], ep));
    }
  }

  cout << (min_t[y] == INF ? -1 : min_t[y]);
  return 0;
}