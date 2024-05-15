#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll n, W;
  cin >> n >> W;

  vector<ll> w(n + 1), v(n + 1);
  for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];

  ll dp[109][100009];
  for(int i = 0; i < 109; i++) for(int j = 0; j < 100009; j++) dp[i][j] = 0;

  ll ans = -1e9;
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= W; j++) {
      if(j < w[i]) {
        dp[i][j] = dp[i - 1][j];
      } else {
        dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]);
      }

      ans = max(ans, dp[i][j]);
    }
  }

  cout << ans;
  return 0;
}