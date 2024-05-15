#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  set<int> g[300009];
  int p;
  for(int i = 2; i <= n; i++) {
    cin >> p;
    g[p].insert(i);
  }

  vector<int> life(300009, 0);
  int x, y;
  while(cin >> x >> y) life[x] = max(life[x], y);
  
  queue<pair<int, int>> q;
  q.push(make_pair(1, life[1]));

  set<int> ans;
  if(life[1] >= 1) ans.insert(1);
  vector<bool> seen(300009, false);
  seen[1] = true;

  while(!q.empty()) {
    int cp = q.front().first;
    int cl = q.front().second;
    q.pop();
    
    for(int ep : g[cp]) {
      if(seen[ep]) continue;
      seen[ep] = true;
      
      if(cl >= 1 || life[ep] >= 1) ans.insert(ep);
      q.push(make_pair(ep, max(life[ep], cl - 1)));
    }
  }

  cout << ans.size();
  return 0;
}