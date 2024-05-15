#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, p;
  cin >> n >> p;

  ll sum = 0;
  vector<ll> a(n + 1);
  for (int i = 0; i < n; i++) {cin >> a[i]; sum += a[i];}

  ll dp[n + 1][2];
  for(int i = 0; i < n + 1; i++) for(int j = 0; j < 2; j++) dp[i][j] = 0;
  dp[0][0]++;

  for(int i = 0; i < n; i++) {
    if(i == 0) dp[i][a[i] % 2]++;
    else {
      dp[i][0] = dp[i - 1][0];
      dp[i][1] = dp[i - 1][1];

      if(a[i] % 2) {
        dp[i][0] += dp[i - 1][1];
        dp[i][1] += dp[i - 1][0];
      } else {
        dp[i][0] += dp[i - 1][0];
        dp[i][1] += dp[i - 1][1];
      }
    }
    // cout << a[i] % 2 << " " << dp[i][a[i] % 2] << endl;
    // cout << i << " " << dp[i][0] << " " << dp[i][1] << endl;
  }

  cout << (p ? dp[n - 1][1] : dp[n - 1][0]);
  return 0;
}