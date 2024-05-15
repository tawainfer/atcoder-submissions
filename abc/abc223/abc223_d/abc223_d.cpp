#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int a, b;
  set<int> g[200009];
  vector<int> deg(200009, 0);

  while(cin >> a >> b) {
    if(g[a].find(b) == g[a].end()) {
      g[a].insert(b);
      deg[b]++;
    }
  }

  vector<int> ans;
  priority_queue<int, vector<int>, greater<int>> ts;
  for(int i = 1; i <= n; i++) if(deg[i] == 0) ts.push(i);

  while(!ts.empty()) {
    int f = ts.top();
    ts.pop();
    ans.push_back(f);

    for(auto &z : g[f]) {
      deg[z]--;
      if(deg[z] == 0) ts.push(z);
    }
  }

  if(ans.size() != n) cout << -1;
  else for(auto &z : ans) cout << z << " ";
  return 0;
}