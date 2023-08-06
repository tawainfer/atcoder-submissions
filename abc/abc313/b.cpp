// https://atcoder.jp/contests/abc313/submissions/44262639

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  set<int> g[59];
  vector<int> deg(59, 0);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].insert(b);
    deg[b]++;
  }

  int ans = 0;
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    if(deg[i] == 0) {
      cnt++;
      ans = i;
    }
  }

  if(cnt == 1) {
    cout << ans;
  } else {
    cout << -1;
  }
}
