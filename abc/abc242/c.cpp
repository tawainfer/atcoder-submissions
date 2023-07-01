// https://atcoder.jp/contests/abc242/submissions/29912889

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  long long n, mod = 998244353, ans = 0;
  cin >> n;

  long long dp[1000009][10];
  for(int i = 1; i <= 9; i++) dp[1][i] = 1;

  for(int i = 2; i <= n; i++) {
    for(int j = 1; j <= 9; j++) {
      if(j == 1) dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1];
      else if(j == 9) dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
      else dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1] + dp[i - 1][j + 1];
      dp[i][j] %= mod;
    }
  }

  for(int i = 1; i <= 9; i++) {
    ans += dp[n][i];
    ans %= mod;
  }

  cout << ans;
}
