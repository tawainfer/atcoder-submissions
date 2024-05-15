#include <bits/stdc++.h>
using namespace std;

set<pair<int, int>> se;
set<int> g[200009];

void dfs(int cp, vector<bool> &seen) {
  for(int ep : g[cp]) {
    if(!seen[ep]) {
      seen[ep] = true;
      se.insert(make_pair(cp, ep));
      dfs(ep, seen);
    }
  }
}

void dfs2(int cp, vector<int> &cnt) {
  for(int ep : g[cp]) {
    if(cnt[cp] + 1 > cnt[ep]) {
      cnt[ep] = cnt[cp] + 1;
      dfs2(ep, cnt);
    }
  }
}

int main() {
  int n, t;
  cin >> n >> t;

  vector<int> deg(200009, 0);
  int a, b;
  while(cin >> a >> b) {
    g[a].insert(b);
    g[b].insert(a);
    deg[a]++;
    deg[b]++;
  }

  vector<bool> seen(200009, false);
  seen[t] = true;

  dfs(t, seen);
  for(auto p : se) {
    int cp = p.first;
    int ep = p.second;
    g[cp].erase(ep);
    deg[ep]--;
  }

  // for(int i = 1; i <= n; i++) {
  //   cout << "i=" << i << endl;
  //   for(int p : g[i]) cout << p << " ";
  //   cout << endl;
  // }

  vector<int> cnt(200009, -1);
  for(int i = 1; i <= n; i++) {
    // if(cnt[i] != -1) continue;
    if(deg[i] != 0) continue;
    cnt[i] = 0;
    dfs2(i, cnt);
  }

  for(int i = 1; i <= n; i++) {
    cout << cnt[i] << " ";
  }
}