#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll mod = 1e9 + 7;
  ll k;
  cin >> k;

  if(k % 9) {
    cout << 0;
    return 0;
  }

  ll dp[k + 1];
  dp[0] = 1;

  for(int i = 1; i <= k; i++) {
    dp[i] = 0;
    for(int j = 1; j <= min(i, 9); j++) {
      dp[i] += dp[i - j];
      dp[i] %= mod;
    }
  }

  cout << dp[k];
  return 0;
}