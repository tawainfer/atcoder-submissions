// https://atcoder.jp/contests/abc315/submissions/44788235

#include <bits/stdc++.h>
using namespace std;
const double INF = 2e18;

double cost(int x1, int y1, int x2, int y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
  int n;
  cin >> n;

  vector<int> x(n), y(n);
  for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

  vector<vector<double>> dp(n + 1, vector<double>(30, INF));
  dp[1][0] = 0;
  for(int i = 1; i < n; i++) {
    for(int j = 0; j < 30; j++) {
      for(int k = i + 1; k <= n; k++) {
        if(j + (k - i - 1) >= 30) break;
        dp[k][j + (k - i - 1)] = min(dp[k][j + (k - i - 1)], (dp[i][j] + cost(x[i - 1], y[i - 1], x[k - 1], y[k - 1])));
      }
    }
  }

  double ans = INF;
  for(int i = 0; i < 30; i++) {
    if(i > 0) dp[n][i] += pow(2, i - 1);
    ans = min(ans, dp[n][i]);
  }

  cout << fixed << setprecision(6) << ans;
  return 0;
}
