#include <bits/stdc++.h>
using namespace std;

void dfs(int cp, vector<set<int>> &g, vector<bool> &seen, int &cnt, vector<int> &prio) {
  for(int ep : g[cp]) {
    if(!seen[ep]) {
      seen[ep] = true;
      dfs(ep, g, seen, cnt, prio);
    }
  }

  prio[cp] = cnt;
  cnt++;
}

void rdfs(int cp, vector<set<int>> &g, vector<bool> &seen, vector<int> &res) {
  res.push_back(cp);
  for(int ep : g[cp]) {
    if(!seen[ep]) {
      seen[ep] = true;
      rdfs(ep, g, seen, res);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<set<int>> g(n, set<int>());
  vector<set<int>> rg(n, set<int>());
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].insert(b);
    rg[b].insert(a);
  }

  vector<bool> seen(n, false);
  int cnt = 1;
  vector<int> prio(n, 0);

  for(int i = 0; i < n; i++) {
    if(!seen[i]) {
      seen[i] = true;
      dfs(i, g, seen, cnt, prio);
    }
  }

  priority_queue<pair<int, int>> pq;
  for(int i = 0; i < n; i++) {
    pq.push(make_pair(prio[i], i));
  }

  seen.assign(n, false);
  vector<vector<int>> ans;

  while(!pq.empty()) {
    int cp = pq.top().second;
    pq.pop();

    if(!seen[cp]) {
      seen[cp] = true;
      vector<int> res;
      rdfs(cp, rg, seen, res);
      ans.push_back(res);
    }
  }

  cout << ans.size() << endl;
  for(auto v : ans) {
    cout << v.size() << " ";
    for(int i = 0; i < v.size(); i++) {
      cout << v[i];
      if(i != v.size() - 1) cout << " ";
    }
    cout << endl;
  }
}