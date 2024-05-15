#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<vector<int>> g(n + 1);
  for(int i = 1; i <= n; i++) {
    if(a[i] == -1) continue;
    g[a[i]].push_back(i);
  }

  for(int i = 1; i <= n; i++) {
    if(a[i] != -1) continue;

    queue<int> q;
    q.push(i);
    while(!q.empty()) {
      int cp = q.front();
      q.pop();

      cout << cp << " ";
      for(auto ep : g[cp]) {
        q.push(ep);
      }
    }
  }
}