#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int x, y;
  set<int> g[200009];
  vector<int> deg(200009, 0);
  while (cin >> x >> y) {
    if(g[x].find(y) != g[x].end()) continue;
    g[x].insert(y);
    deg[y]++;
  }

  vector<int> ts;
  queue<int> q;
  for (int i = 1; i <= n; i++)
    if (deg[i] == 0) q.push(i);

  int cnt = 0;
  vector<int> ans(200009, 0);

  while (!q.empty()) {
    if (q.size() != 1) {
      cout << "No" << endl;
      return 0;
    }

    int f = q.front();
    q.pop();

    cnt++;
    ans[f] = cnt;

    for (auto &z : g[f]) {
      deg[z]--;
      if (deg[z] == 0) q.push(z);
    }

    ts.push_back(f);
  }

  cout << "Yes" << endl;
  for (int i = 1; i <= n; i++) cout << ans[i] << " ";
  return 0;
}