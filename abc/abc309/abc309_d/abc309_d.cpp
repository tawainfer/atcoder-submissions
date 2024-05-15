#include <bits/stdc++.h>
using namespace std;

int bfs(int sp, vector<set<int>> &g) {
  int res = 0;
  vector<bool> seen(g.size() + 1, false);
  seen[sp] = true;

  queue<pair<int, int>> q;
  q.push(make_pair(sp, 0));

  while(!q.empty()) {
    int cp = q.front().first;
    int cc = q.front().second;
    q.pop();
    res = max(res, cc);

    for(int ep : g[cp]) {
      if(!seen[ep]) {
        seen[ep] = true;
        q.push(make_pair(ep, cc + 1));
      }
    }
  }

  return res;
}

int main() {
  int n1, n2, m;
  cin >> n1 >> n2 >> m;

  vector<set<int>> g1(n1 + 1), g2(n1 + n2 + 1);
  while(m--) {
    int a, b;
    cin >> a >> b;

    if(b <= n1) {
      g1[a].insert(b);
      g1[b].insert(a);
    } else {
      g2[a].insert(b);
      g2[b].insert(a);
    }
  }

  int c1 = bfs(1, g1);
  int c2 = bfs(n1 + n2, g2);

  int ans = c1 + c2 + 1;
  cout << ans;
  return 0;
}