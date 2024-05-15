#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> x(n), y(n), z(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> z[i];
  }

  ll ma = 0;
  for(auto t : z) ma += t;

  vector<vector<ll>> dp(n + 1, vector<ll>(ma + 1, INF));
  dp[0][0] = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= ma; j++) {
      if(dp[i][j] != INF) {
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
        if(j + z[i] <= ma) {
          ll t = (x[i] + y[i]);
          ll cnt = max((t + 2 - 1) / 2 - x[i], 0LL);
          dp[i + 1][j + z[i]] = min(dp[i + 1][j + z[i]], dp[i][j] + cnt);
        }
      }
    }
  }

  ll ans = INF;
  ll base = (ma + 2 - 1) / 2;

  for(int i = 0; i <= ma; i++) {
    if(i >= base) {
      ans = min(ans, dp[n][i]);
    }
  }

  cout << ans;
  return 0;
}