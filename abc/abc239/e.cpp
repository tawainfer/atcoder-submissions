// https://atcoder.jp/contests/abc239/submissions/45057261

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> x(n + 1);
  for(int i = 1; i <= n; i++) cin >> x[i];

  vector<set<int>> g(n + 1);
  for(int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }

  int max_prio = 0;
  vector<int> prio(n + 1, INF);
  prio[1] = 0;

  queue<int> qe;
  qe.push(1);

  while(!qe.empty()) {
    int cp = qe.front();
    qe.pop();
    
    for(int ep : g[cp]) {
      if(prio[ep] == INF) {
        prio[ep] = prio[cp] + 1;
        max_prio = max(max_prio, prio[ep]);
        qe.push(ep);
      }
    }
  }

  vector<vector<int>> stock(n + 1);
  for(int i = 1; i <= n; i++) {
    stock[i].push_back(x[i]);
  }
  
  vector<pair<int, int>> prio_pos;
  for(int i = 1; i <= n; i++) {
    prio_pos.push_back(make_pair(prio[i], i));
  }
  sort(prio_pos.begin(), prio_pos.end());

  for(int i = max_prio; i > 0; i--) {
    while(prio_pos.back().first == i) {
      qe.push(prio_pos.back().second);
      prio_pos.pop_back();
    }

    while(!qe.empty()) {
      int cp = qe.front();
      qe.pop();

      for(int ep : g[cp]) {
        if(prio[cp] > prio[ep]) {
          vector<int> tmp;
          for(int e : stock[cp]) tmp.push_back(e);
          for(int e : stock[ep]) tmp.push_back(e);
          sort(tmp.begin(), tmp.end());
          reverse(tmp.begin(), tmp.end());

          stock[ep].clear();
          for(int j = 0; j < min((int)tmp.size(), 20); j++) {
            stock[ep].push_back(tmp[j]);
          }
        }
      }
    }
  }

  for(int _ = 0; _ < q; _++) {
    int v, k;
    cin >> v >> k;

    sort(stock[v].begin(), stock[v].end());
    reverse(stock[v].begin(), stock[v].end());
    cout << stock[v][k - 1] << endl;
  }
}
