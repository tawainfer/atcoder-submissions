// https://atcoder.jp/contests/abc303/submissions/41733713

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  bool f[59][59];
  for(int i = 0; i < 59; i++) for(int j = 0; j < 59; j++) f[i][j] = false;

  for(int i = 0; i < m; i++) {
    vector<int> a(n);
    for(auto &z : a) cin >> z;

    for(int j = 1; j < n; j++) {
      f[a[j - 1]][a[j]] = true;
      f[a[j]][a[j - 1]] = true;
    }
  }

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = i + 1; j <= n; j++) {
      if(!f[i][j]) {
        ans++;
        // cout << i << " " << j << endl;
      }
    }
  }

  cout << ans;
}
