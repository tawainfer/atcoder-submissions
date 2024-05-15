#include <bits/stdc++.h>
using namespace std;

void dfs() {

}

int main() {
  int n;
  cin >> n;

  vector<set<int>> g(n + 1);
  for(int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    g[u].insert(v);
    g[v].insert(u);
  }

  if(g[1].size() == 1) {
    cout << 1;
    return 0;
  }

  vector<bool> seen(n + 1, false);
  seen[1] = true;

  vector<int> ptn;
  for(int sp : g[1]) {
    int cnt = 0;
    queue<int> q;
    q.push(sp);
    seen[sp] = true;
    // cout << 1 << " " << sp << endl;

    while(!q.empty()) {
      int cp = q.front();
      q.pop();
      cnt++;

      for(auto ep : g[cp]) {
        if(!seen[ep]) {
          seen[ep] = true;
          // cout << cp << " " << ep << endl;
          q.push(ep);
        }
      }
    }

    ptn.push_back(cnt);
  }

  int ans = 1;
  sort(ptn.begin(), ptn.end());
  ptn.pop_back();
  for(auto x : ptn) {
    ans += x;
  }

  cout << ans;
}