#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(int node, int parent, vector<set<int>> &g, vector<bool> &guard, set<int> &se) {
  if(se.find(node) != se.end()) {
    guard[node] = true;
  }

  for(auto neighbor : g[node]) {
    if(neighbor == parent) continue;
    dfs(neighbor, node, g, guard, se);
    if(guard[neighbor]) {
      guard[node] = true;
    }
  }
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<set<int>> g(n + 1);
  for(int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }

  vector<int> v(k);
  for(auto &z : v) cin >> z;

  set<int> se;
  for(auto x : v) se.insert(x);

  vector<bool> guard(n + 1, false);
  dfs(v[0], -1, g, guard, se);

  vector<bool> seen(n + 1, false);
  seen[v[0]] = true;
  queue<int> q;
  q.push(v[0]);

  int ans = 0;
  while(!q.empty()) {
    int cp = q.front();
    q.pop();
    ans++;

    for(auto ep : g[cp]) {
      if(!guard[ep]) continue;
      if(seen[ep]) continue;
      seen[ep] = true;
      q.push(ep);
    }
  }

  cout << ans;
}