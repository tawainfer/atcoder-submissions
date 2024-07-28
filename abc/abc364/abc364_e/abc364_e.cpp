#include <bits/stdc++.h>
using namespace std;
const int INF = 2e9;

int main() {
  int n, x, y;
  cin >> n >> x >> y;

  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  // i番目までの料理の中から
  // j個の料理を選んで
  // 甘さの合計をkにすることができるときのしょっぱさの最小値
  int dp[n + 1][n + 1][x + 1];
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= n; j++) {
      for(int k = 0; k <= x; k++) {
        dp[i][j][k] = INF;
      }
    }
  }
  dp[0][0][0] = 0;

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= n; j++) {
      for(int k = 0; k <= x; k++) {
        dp[i][j][k] = dp[i - 1][j][k];
        if(j - 1 >= 0 && k - a[i - 1] >= 0) {
          dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j - 1][k - a[i - 1]] + b[i - 1]);
        }

        if(dp[i][j][k] <= y) {
          ans = max(ans, j);
        }
      }
    }
  }

  cout << min(ans + 1, n);
}