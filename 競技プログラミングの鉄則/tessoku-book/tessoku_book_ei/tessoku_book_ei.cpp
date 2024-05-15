#include <bits/stdc++.h>
using namespace std;

void dfs(int cp, vector<set<int>> &g, vector<int> &path, vector<bool> &seen, int &n, vector<int> &ans) {
  path.push_back(cp);
  if(cp == n) {
    ans.clear();
    for(int x : path) ans.push_back(x);
  }

  for(int ep : g[cp]) {
    if(!seen[ep]) {
      seen[ep] = true;
      dfs(ep, g, path, seen, n, ans);
    }
  }
  
  path.pop_back();
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<set<int>> g(n + 1);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }

  vector<int> path, ans;
  vector<bool> seen(n + 1, false);
  seen[1] = true;
  dfs(1, g, path, seen, n, ans);

  for(int x : ans) cout << x << " ";
  return 0;
}