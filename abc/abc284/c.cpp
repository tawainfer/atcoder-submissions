// https://atcoder.jp/contests/abc284/submissions/37805466

#include <bits/stdc++.h>
using namespace std;

vector<int> g[109];
vector<bool> seen(109, false);

void dfs(int x) {
  for (auto &z : g[x]) {
    if (!seen[z]) {
      seen[z] = true;
      dfs(z);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  int u, v;
  while (cin >> u >> v) {
    g[u].push_back(v);
    g[v].push_back(u);
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (!seen[i]) {
      ans++;
      seen[i] = true;
      dfs(i);
    }
  }

  cout << ans;
}
