#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(3, -INF));
  dp[0][0] = 0;
  // dp[0][1] = 0;/

  for(int t = 1; t <= n; t++) {
    dp[t][0] = dp[t - 1][0];
    dp[t][1] = max(dp[t - 1][0] + a[t], max(dp[t - 1][1], dp[t - 1][2] + a[t]));
    dp[t][2] = max(dp[t - 1][1] + a[t] * 2, dp[t - 1][2]);
  }

  // for(int t = 0; t <= n; t++) {
  //   for(int i = 1; i <= 2; i++) {
  //     cout << dp[t][i] << " ";
  //   }
  //   cout << endl;
  // }

  cout << max(dp[n][1], dp[n][2]);
}