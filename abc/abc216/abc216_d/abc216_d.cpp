#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> k(m);
  vector<vector<int>> a(m);
  for(int i = 0; i < m; i++) {
    cin >> k[i];
    a[i].resize(k[i]);
    for(int j = 0; j < k[i]; j++) {
      cin >> a[i][j];
    }
  }

  vector<vector<int>> g(n + 1);
  vector<int> in(n + 1, 0);
  in[0] = -1;

  for(int i = 0; i < m; i++) {
    for(int j = 1; j < a[i].size(); j++) {
      g[a[i][j - 1]].push_back(a[i][j]);
      in[a[i][j]]++;
    }
  }

  queue<int> q;
  for(int i = 1; i <= n; i++) {
    if(in[i] == 0) {
      q.push(i);
    }
  }

  while(!q.empty()) {
    int cp = q.front();
    q.pop();
    if(in[cp] == -1) continue;
    in[cp] = -1;

    for(int ep : g[cp]) {
      in[ep]--;
      if(in[ep] == 0) q.push(ep);
    }
  }

  for(int i = 1; i <= n; i++) {
    if(in[i] != -1) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
  return 0;
}