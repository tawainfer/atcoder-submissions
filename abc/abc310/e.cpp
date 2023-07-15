// https://atcoder.jp/contests/abc310/submissions/43653600

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;
  s = "!" + s;

  ll dp[n + 1][2];
  for(ll i = 0; i <= n; i++) for(ll j = 0; j < 2; j++) dp[i][j] = 0;

  for(ll i = 1; i < n; i++) {
    if(s[i] == '0') dp[i][0] += 1;
    else dp[i][1] += 1;

    if(s[i + 1] == '0') {
      dp[i + 1][0] = 0;
      dp[i + 1][1] = dp[i][0] + dp[i][1];
    } else {
      dp[i + 1][0] = dp[i][1];
      dp[i + 1][1] = dp[i][0];
    }
  }
  if(s[n] == '1') dp[n][1]++;

  ll ans = 0;
  for(ll i = 1; i <= n; i++) ans += dp[i][1];

  cout << ans;
  return 0;
}
