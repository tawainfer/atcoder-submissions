#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n, m;
  cin >> n >> m;

  set<int> g[8009];
  map<pair<int, int>, int> cost;
  map<pair<int, int>, int> tree;

  int a, b, c, d;
  while (cin >> a >> b >> c >> d) {
    g[a].insert(b);
    g[b].insert(a);
    cost[make_pair(a, b)] = c;
    cost[make_pair(b, a)] = c;
    tree[make_pair(a, b)] = d;
    tree[make_pair(b, a)] = d;
  }

  vector<int> check_dist(n + 1, INF);
  vector<int> check_tree(n + 1, -INF);
  check_dist[1] = 0;
  check_tree[1] = 0;

  priority_queue<vector<int>> pq;
  pq.push({0, 0, 1}); // -dist, tree, pos

  while(!pq.empty()) {
    int cd = -pq.top()[0];
    int ct = pq.top()[1];
    int cp = pq.top()[2];
    pq.pop();
    if(cd > check_dist[cp]) continue;
    if(cd == check_dist[cp] && ct < check_tree[cp]) continue;

    for(int ep : g[cp]) {
      int ed = cd + cost[make_pair(cp, ep)];
      int et = ct + tree[make_pair(cp, ep)];

      if(ed < check_dist[ep]) {
        check_dist[ep] = ed;
        check_tree[ep] = et;
        pq.push({-ed, et, ep});
      } else if(ed == check_dist[ep]) {
        if(et <= check_tree[ep]) continue;
        check_dist[ep] = ed;
        check_tree[ep] = et;
        pq.push({-ed, et, ep});
      }
    }
  }

  cout << check_dist[n] << " " << check_tree[n];
  return 0;
}