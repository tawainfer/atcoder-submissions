#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  set<int> g[100009];
  int a, b;
  while(cin >> a >> b) {
    g[a].insert(b);
    g[b].insert(a);
  }

  for(int i = 1; i <= n; i++) {
    cout << i << ": {";
    auto iter = g[i].begin();
    while(iter != g[i].end()) {
      cout << *iter;
      iter++;
      if(iter == g[i].end()) break;
      cout << ", ";
    }
    cout << "}\n";
  }
}