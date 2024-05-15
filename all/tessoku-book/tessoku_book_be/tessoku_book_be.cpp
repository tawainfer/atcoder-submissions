#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<vector<int>> dp(30, vector<int>(n + 1));
  for(int i = 1; i <= n; i++) {
    dp[0][i] = a[i];
  }

  for(int i = 1; i < dp.size(); i++) {
    for(int j = 1; j <= n; j++) {
      dp[i][j] = dp[i - 1][dp[i - 1][j]];
    }
  }

  for(int _ = 0; _ < q; _++) {
    int x, y;
    cin >> x >> y;

    for(int i = 0; i < 30; i++) {
      if(y & (1 << i)) {
        x = dp[i][x];
      }
    }

    cout << x << endl;
  }
}