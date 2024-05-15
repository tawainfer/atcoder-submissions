#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9;

int main() {
  int n, m;
  cin >> n >> m;

  int a, b, c;
  vector<int> g[100009];
  map<pair<int, int>, int> cost;

  for(int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    g[a].push_back(b);
    g[b].push_back(a);
    cost[make_pair(a, b)] = c;
    cost[make_pair(b, a)] = c;
  }

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push(make_pair(0, 1));

  vector<int> cnt(100009, INF);
  cnt[1] = 0;

  while(!pq.empty()) {
    int cc = pq.top().first;
    int cp = pq.top().second;
    pq.pop();
    if(cnt[cp] < cc) continue;

    for(auto ep : g[cp]) {
      if(cnt[ep] <= (cc + cost[make_pair(cp, ep)])) continue;

      cnt[ep] = (cc + cost[make_pair(cp, ep)]);
      pq.push(make_pair(cnt[ep], ep));
    }
  }

  pq.push(make_pair(0, n));
  vector<int> cnt2(100009, INF);
  cnt2[n] = 0;

  while(!pq.empty()) {
    int cc = pq.top().first;
    int cp = pq.top().second;
    pq.pop();
    if(cnt2[cp] < cc) continue;

    for(auto ep : g[cp]) {
      if(cnt2[ep] <= (cc + cost[make_pair(cp, ep)])) continue;

      cnt2[ep] = (cc + cost[make_pair(cp, ep)]);
      pq.push(make_pair(cnt2[ep], ep));
    }
  }

  for(int k = 1; k <= n; k++) {
    cout << cnt[k] + cnt2[k] << endl;
  }
}