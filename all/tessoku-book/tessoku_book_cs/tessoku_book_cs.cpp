#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  string s, t;
  cin >> s >> t;

  int n = s.size();
  int m = t.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, INF));
  dp[0][0] = 0;

  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= m; j++) {
      if(i == 0 && j == 0) continue;

      if(i != 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
      if(j != 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
      if(i != 0 && j != 0) {
        if(s[i - 1] == t[j - 1]) dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
        else dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
      }
    }
  }

  cout << dp[n][m];
  return 0;
}