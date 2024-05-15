#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, l, r;
  cin >> n >> l >> r;

  vector<ll> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(3, INF));
  for(int i = 0; i < 3; i++) dp[0][i] = 0;

  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < 3; j++) {
      if(j == 0) {
        dp[i][j] = dp[i - 1][0] + l;
      } else if(j == 1) {
        dp[i][j] = min(dp[i - 1][0] + l, dp[i - 1][1] + a[i]);
      } else if(j == 2) {
        dp[i][j] = min(dp[i - 1][0] + l, min(dp[i - 1][1] + a[i], dp[i - 1][2] + r));
      }
    }
  }

  cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
  return 0;
}