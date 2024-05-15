#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> deg(n + 1, 0);
  set<int> g[n + 1];

  int a;
  for(int i = 2; i <= n; i++) {
    cin >> a;
    g[i].insert(a);
    deg[a]++;
  }

  queue<int> q;
  vector<bool> check(n + 1, false);
  for(int i = 1; i <= n; i++) {
    if(deg[i] == 0) {
      q.push(i);
      check[i] = true;
    }
  }

  vector<int> cnt(n + 1, 0);
  while(!q.empty()) {
    int cp = q.front();
    q.pop();

    for(int ep : g[cp]) {
      cnt[ep] += cnt[cp] + 1;
      deg[ep]--;
      if(deg[ep] == 0) q.push(ep);
    }
  }

  for(int i = 1; i <= n; i++) cout << cnt[i] << " ";
  return 0;
}