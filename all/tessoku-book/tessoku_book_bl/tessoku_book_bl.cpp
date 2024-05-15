#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n, m;
  cin >> n >> m;

  set<int> g[100009];
  map<pair<int, int>, int> cost;
  int a, b, c;
  while(cin >> a >> b >> c) {
    g[a].insert(b);
    g[b].insert(a);
    cost[make_pair(a, b)] = c;
    cost[make_pair(b, a)] = c;
  }

  vector<int> cnt(100009, INF);
  cnt[1] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // cost, pos
  pq.push(make_pair(0, 1));

  while(!pq.empty()) {
    int cc = pq.top().first;
    int cp = pq.top().second;
    pq.pop();
    if(cc > cnt[cp]) continue;

    for(int ep : g[cp]) {
      if(cnt[cp] + cost[make_pair(cp, ep)] < cnt[ep]) {
        cnt[ep] = cnt[cp] + cost[make_pair(cp, ep)];
        pq.push(make_pair(cnt[ep], ep));
      }
    }
  }

  for(int i = 1; i <= n; i++) cout << (cnt[i] == INF ? -1 : cnt[i]) << " ";
  return 0;
}