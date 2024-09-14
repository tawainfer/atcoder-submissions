#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n;
  cin >> n;

  int mg;
  cin >> mg;

  // vector<set<int>> g(n + 1);
  vector<vector<bool>> bg(n, vector<bool>(n, false));
  for(int i = 0; i < mg; i++) {
    int u, v;
    cin >> u >> v;
    // g[u].insert(v);
    // g[v].insert(u);
    bg[u - 1][v - 1] = true;
    bg[v - 1][u - 1] = true;
  }

  int mh;
  cin >> mh;

  // vector<set<int>> h(n + 1);
  vector<vector<bool>> bh(n, vector<bool>(n, false));
  for(int i = 0; i < mh; i++) {
    int u, v;
    cin >> u >> v;
    // h[u].insert(v);
    // h[v].insert(u);
    bh[u - 1][v - 1] = true;
    bh[v - 1][u - 1] = true;
  }

  vector<vector<int>> a(n + 1, vector<int>(n + 1));
  for(int i = 0; i < n - 1; i++) {
    for(int j = i + 1; j < n; j++) {
      cin >> a[i][j];
    }
  }

  int ans = INF;
  vector<int> idx;
  for(int i = 0; i < n; i++) idx.push_back(i);
  do {
    int sum = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(bg[i][j] != bh[idx[i]][idx[j]]) {
          sum += a[idx[i]][idx[j]];
        }
      }
    }

    // cout << sum << endl;
    ans = min(sum, ans);
  } while(next_permutation(idx.begin(), idx.end()));

  cout << ans;
}