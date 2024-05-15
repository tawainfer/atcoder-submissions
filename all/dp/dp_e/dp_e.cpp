#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, W, sum = 0;
  cin >> n >> W;
  ll w[109], v[109];
  for(int i = 1; i <= n; i++) {
    cin >> w[i] >> v[i];
    sum += v[i];
  }

  ll dp[n+1][sum+1];
  for(int j = 0; j <= sum; j++) dp[0][j] = 1000000000000009;
  dp[0][0] = 0;

  for(int i = 1; i <= n; i++) for(int j = 0; j <= sum; j++) {
    if(j >= v[i]) dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);
    else dp[i][j] = dp[i-1][j];
  }

  for(int i = sum; i >= 0; i--) {
  	if(dp[n][i] <= W) {
      cout << i;
      return 0;
    }
  }
}