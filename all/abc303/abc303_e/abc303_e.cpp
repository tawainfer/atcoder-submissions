#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int u, v;
  set<int> g[200009];

  while(cin >> u >> v) {
    g[u].insert(v);
    g[v].insert(u);
  }

  vector<int> ans;
  int cnt = n;

  for(int cp = 1; cp <= n; cp++) {
    if(g[cp].size() >= 3) {
      ans.push_back(g[cp].size());
      cnt -= g[cp].size() + 1;

      while(g[cp].size() > 0) {
        auto iter = g[cp].end();
        iter--;
        int ep = *iter;

        g[cp].erase(ep);
        g[ep].erase(cp);
      }
    }
  }
  
  while(cnt >= 3) {
    ans.push_back(2);
    cnt -= 3;
  }

  sort(ans.begin(), ans.end());
  for(int x : ans) cout << x << " ";
}