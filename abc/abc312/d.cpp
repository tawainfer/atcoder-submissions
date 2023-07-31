// https://atcoder.jp/contests/abc312/submissions/44133217

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 998244353;

int main() {
  string s;
  cin >> s;
  ll n = s.size();

  vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));
  dp[0][0] = 1;

  for(int i = 0; i < n; i++) {
    char c = s[i];

    for(int j = 0; j < dp[i].size(); j++) {
      for(int k = -1; k <= 1; k += 2) {
        if(k == -1 && c == '(') continue;
        if(k == 1 && c == ')') continue;
        if(j + k < 0) continue;

        dp[i + 1][j + k] += dp[i][j];
        dp[i + 1][j + k] %= MOD;
      }
    }
  }

  cout << dp[n][0];
  return 0;
}
