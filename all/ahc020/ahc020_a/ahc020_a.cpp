#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

ll distance(ll x1, ll y1, ll x2, ll y2) {
  return round(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}

int main() {
  ll n, m, k;
  cin >> n >> m >> k;

  ll ma_x = -INF;
  ll ma_y = -INF;
  ll mi_x = INF;
  ll mi_y = INF;
  vector<vector<ll>> vertex_pos(n + 1);
  ll x, y;
  for(int i = 1; i <= n; i++) {
    cin >> x >> y;
    vertex_pos[i] = {x, y};

    ma_x = max(ma_x, x);
    ma_y = max(ma_y, y);
    mi_x = min(mi_x, x);
    mi_y = min(mi_y, y);
  }

  // vector<ll> max_distance(n + 1, 0);
  vector<ll> power(n + 1, 0);
  vector<vector<ll>> edge(m + 1);
  ll u, v, w;
  for(int i = 1; i <= m; i++) {
    cin >> u >> v >> w;
    edge[i] = {u, v, w};
    
    // max_distance[u] = max(max_distance[u], distance(vertex_pos[u][0], vertex_pos[u][1], vertex_pos[v][0], vertex_pos[v][1]) * 3 / 4);
    // max_distance[v] = max(max_distance[v], distance(vertex_pos[u][0], vertex_pos[u][1], vertex_pos[v][0], vertex_pos[v][1]) * 3 / 4);
  }

  vector<vector<ll>> people_pos(k + 1);
  ll a, b;
  for(int i = 1; i <= k; i++) {
    cin >> a >> b;
    people_pos[i] = {a, b};
  }

  // output
  set<ll> se;
  for(int i = 1; i <= k; i++) {
    ll mi_d = INF;
    ll mi_p = -1;

    for(int j = 1; j <= n; j++) {
      ll d = distance(people_pos[i][0], people_pos[i][1], vertex_pos[j][0], vertex_pos[j][1]);
      if(d < mi_d) {
        mi_d = d;
        mi_p = j;
      }
    }

    power[mi_p] = max(power[mi_p], mi_d + 1);
    se.insert(mi_p);
  }

  for(int i = 1; i <= n; i++) {
    cout << power[i];
    cout << (i == n ? "\n" : " ");
  }

  for(int i = 1; i <= m; i++) {
    if(se.find(edge[i][0]) == se.end() && se.find(edge[i][1]) == se.end()) cout << 0; 
    else cout << 1;
    cout << (i == m ? "\n" : " ");
  }

  // set<ll> shutdown;
  // for(int i = 1; i <= n; i++) {
  //   if(max_distance[i] == INF) {
  //     cout << 5000;
  //   } else if(max_distance[i] > 5000) {
  //     cout << 0;
  //     shutdown.insert(i);
  //   } else {
  //     cout << max_distance[i];
  //   }

  //   cout << (i == n ? "\n" : " ");
  // }

  // for(int i = 1; i <= m; i++) {
  //   if(shutdown.find(edge[i][0]) != shutdown.end() || shutdown.find(edge[i][1]) != shutdown.end()) cout << 0;
  //   else cout << 1;
  //   cout << (i == m ? "\n" : " ");
  // }
}