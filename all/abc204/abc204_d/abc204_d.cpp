#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  vector<int> t(n + 1, INF);
  for(int i = 1; i <= n; i++) {
    cin >> t[i];
    sum += t[i];
  }

  vector<vector<bool>> dp(n + 1, vector<bool> (sum + 1, false));
  dp[0][0] = true;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= sum; j++) {
      if(dp[i][j]) {
        dp[i + 1][j] = true;
        dp[i + 1][j + t[i + 1]] = true;
      }
    }
  }

  int ans = INF;
  for(int i = 0; i <= sum; i++) {
    if(dp[n][i]) ans = min(ans, max(i, sum - i));
  }

  cout << ans;
  return 0;
}