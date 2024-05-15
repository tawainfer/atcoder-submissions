#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  // vector<ll> a(m), b(m), x(m), y(m);
  // for(int i = 0; i < m; i++) {
  //   cin >> a[i] >> b[i] >> x[i] >> y[i];
  // }

  vector<set<ll>> g(n + 1);
  map<pair<ll, ll>, pair<ll, ll>> move; // 人, 座標
  for(int i = 0; i < m; i++) {
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    g[a].insert(b);
    g[b].insert(a);
    move[make_pair(a, b)] = make_pair(x, y);
    move[make_pair(b, a)] = make_pair(-x, -y);
  }

  vector<ll> seen(n + 1, false);
  seen[1] = true;
  vector<pair<ll, ll>> pos(n + 1, make_pair(INF, INF));
  pos[1] = make_pair(0, 0);
  queue<pair<ll, pair<ll, ll>>> q;
  q.push(make_pair(1, make_pair(0, 0)));

  while(!q.empty()) {
    ll cp = q.front().first;
    ll cx = q.front().second.first;
    ll cy = q.front().second.second;
    q.pop();
    
    for(int ep : g[cp]) {
      if(!seen[ep]) {
        seen[ep] = true;
        ll ex = cx + move[make_pair(cp, ep)].first;
        ll ey = cy + move[make_pair(cp, ep)].second;
        // cout << cp << " " << ep << " " << ex << " " << ey << endl;
        pos[ep] = make_pair(ex, ey);
        q.push(make_pair(ep, make_pair(ex, ey)));
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    if(pos[i].first == INF || pos[i].second == INF) {
      cout << "undecidable" << endl;
    } else {
      cout << pos[i].first << " " << pos[i].second << endl;
    }
  }
}