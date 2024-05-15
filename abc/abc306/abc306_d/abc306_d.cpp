#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<vector<ll>> dp(n + 1, vector<ll> (2, -INF));
  dp[0][0] = 0;

  ll x, y;
  for(int i = 1; i <= n; i++) {
    cin >> x >> y;

    if(x == 0) {
      dp[i][0] = max(dp[i - 1][0] + y, max(dp[i - 1][1] + y, dp[i - 1][0]));
      dp[i][1] = dp[i - 1][1];
    } else {
      dp[i][0] = dp[i - 1][0];
      dp[i][1] = max(dp[i - 1][0] + y, dp[i - 1][1]);
    }
  }

  cout << max(dp[n][0], dp[n][1]);
  return 0;
}