// https://atcoder.jp/contests/abc147/submissions/30015173

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, ans = 0;
  cin >> n;
  int a[n], x[n][n], y[n][n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    for(int j = 0; j < a[i]; j++) cin >> x[i][j] >> y[i][j];
  }

  for(int bit = 0; bit < (1 << n); bit++) {
    vector<int> judge(n, 2);
    bool flag = false;
    int cnt = 0;

    for(int i = 0; i < n; i++) {
      bool inv = false;
      int z;
      if(bit & (1 << i)) {
        inv = false;
        z = 1;
      } else {
        inv = true;
        z = 0;
      }

      if((z != judge[i] && judge[i] == 2) || z == judge[i]) {
        judge[i] = z;
      } else {
        flag = true;
      }

      for(int j = 0; j < a[i]; j++) {
        if(!inv) {
          if((judge[x[i][j] - 1] != y[i][j] && judge[x[i][j] - 1] == 2) ||
             judge[x[i][j] - 1] == y[i][j])
            judge[x[i][j] - 1] = y[i][j];
          else flag = true;
        }
      }
    }

    if(!flag) {
      for(int j = 0; j < n; j++)
        if(judge[j] == 1) cnt++;
      ans = max(ans, cnt);
    }
  }

  cout << ans;
}
