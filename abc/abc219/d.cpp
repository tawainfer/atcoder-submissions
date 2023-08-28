// https://atcoder.jp/contests/abc219/submissions/45031899

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n, x, y;
  cin >> n >> x >> y;

  vector<int> a(n + 1), b(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];

  int dp[n + 1][301][301];
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= 300; j++) {
      for(int k = 0; k <= 300; k++) {
        dp[i][j][k] = INF;
      }
    }
  }

  dp[0][0][0] = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= 300; j++) {
      for(int k = 0; k <= 300; k++) {
        if(dp[i][j][k] == INF) continue;
        dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
        
        int ej = min(j + a[i + 1], 300);
        int ek = min(k + b[i + 1], 300);
        dp[i + 1][ej][ek] = min(dp[i + 1][ej][ek], dp[i][j][k] + 1);
      }
    }
  }

  int ans = INF;
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= 300; j++) {
      for(int k = 0; k <= 300; k++) {
        if(j >= x && k >= y) {
          ans = min(ans, dp[i][j][k]);
        }
      }
    }
  }

  cout << (ans != INF ? ans : -1);
  return 0;
}

