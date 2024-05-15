#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<int> a(n + 1), b(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];

  ll mod = 998244353;
  ll dp[200009][2];
  for(int i = 0; i < 200009; i++) for(int j = 0; j < 2; j++) dp[i][j] = 0;
  dp[1][0] = 1;
  dp[1][1] = 1;

  for(int i = 2; i <= n; i++) {
    if(a[i - 1] != a[i]) dp[i][0] += dp[i - 1][0];
    if(b[i - 1] != a[i]) dp[i][0] += dp[i - 1][1];
    if(a[i - 1] != b[i]) dp[i][1] += dp[i - 1][0];
    if(b[i - 1] != b[i]) dp[i][1] += dp[i - 1][1];
    dp[i][0] %= mod;
    dp[i][1] %= mod;
  }

  cout << (dp[n][0] + dp[n][1]) % mod;
  return 0;
}