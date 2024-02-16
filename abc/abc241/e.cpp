// https://atcoder.jp/contests/abc241/submissions/50304795

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  ll m = ceil(log2(k)) + 1;
  vector<vector<ll>> dp(m, vector<ll>(n));
  for(int i = 0; i < n; i++) {
    dp[0][i] = a[i];
  }

  for(int i = 1; i < m; i++) {
    for(int j = 0; j < n; j++) {
      dp[i][j] = dp[i - 1][j] + dp[i - 1][(j + dp[i - 1][j]) % n];
    }
  }

  ll ans = 0;
  for(int i = 0; i < m; i++) {
    if(k & (1LL << i)) {
      ans += dp[i][ans % n];
    }
  }

  cout << ans;
}
