#include <bits/stdc++.h>
using namespace std;

  set<int> g[59];

void dfs(int x, vector<bool> &seen) {
  for(auto z : g[x]) {
    if(!seen[z]) {
      seen[z] = true;
      dfs(z, seen);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> p(m);

  int u, v;
  for(int i = 0; i < m; i++) {
    cin >> u >> v;
    p[i] = make_pair(u, v);
    g[u].insert(v);
    g[v].insert(u);
  }

  int ans = 0;
  for(int i = 0; i < m; i++) {
    int a = p[i].first;
    int b = p[i].second;
    g[a].erase(b);
    g[b].erase(a);

    vector<bool> seen(59, false);
    seen[1] = true;
    dfs(1, seen);

    bool check = true;
    for(int j = 1; j <= n; j++) if(!seen[j]) check = false;

    if(!check) ans++;
    g[a].insert(b);
    g[b].insert(a);
  }

  cout << ans;
  return 0;
}