#include <bits/stdc++.h>
using namespace std;

const int INIT = 300009;

int main() {
  int n, q;
  cin >> n >> q;

  set<int> g[INIT];

  int t, u, v;
  int cnt = 0;
  vector<bool> check(INIT, false);
  vector<int> deg(INIT, 0);

  for (int k = 0; k < q; k++) {
    cin >> t;

    if (t == 1) {
      cin >> u >> v;

      g[u].insert(v);
      g[v].insert(u);

      if (deg[u] == 0) cnt++;
      if (deg[v] == 0) cnt++;

      deg[u]++;
      deg[v]++;
    }

    if (t == 2) {
      cin >> v;

      if (deg[v] != 0) {
        deg[v] = 0;
        cnt--;

        for (auto ep : g[v]) {
          deg[ep]--;
          if (deg[ep] == 0) cnt--;
          g[ep].erase(v);
        }

        g[v].clear();
      }
    }

    cout << n - cnt << endl;
  }
}