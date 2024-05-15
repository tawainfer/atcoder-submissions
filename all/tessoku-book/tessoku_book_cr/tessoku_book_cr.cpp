#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, W;
  cin >> n >> W;

  vector<ll> w(n + 1), v(n + 1);
  for(ll i = 1; i <= n; i++) cin >> w[i] >> v[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(100009, INF));
  dp[0][0] = 0;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < dp[i].size(); j++) {
      if(dp[i][j] == INF) continue;
      dp[i + 1][j + v[i + 1]] = min(dp[i + 1][j + v[i + 1]], dp[i][j] + w[i + 1]);
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
    }
  }

  int ans = 0;
  for(int i = 0; i < dp[n].size(); i++) {
    if(dp[n][i] <= W) {
      ans = i;
    }
  }
  
  cout << ans;
  return 0;
}