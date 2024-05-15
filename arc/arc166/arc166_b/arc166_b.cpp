#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

ll cost(ll x, ll y) {
  return (x + y - 1) / y * y - x;
}

int main() {
  ll n;
  cin >> n;

  vector<ll> ptn(3);
  for(auto &z : ptn) cin >> z;

  vector<ll> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(8, INF));
  dp[0][0] = 0;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 8; j++) {
      if(dp[i][j] == INF) continue;

      for(int k = 0; k < 8; k++) {
        if((j & k) != 0) continue;

        ll l = 1;
        for(int m = 0; m < 3; m++) {
          if(k & (1 << m)) {
            l = lcm(l, ptn[m]);
          }
        }

        dp[i + 1][j | k] = min(dp[i + 1][j | k], dp[i][j] + cost(a[i + 1], l));
      }
    }
  }

  cout << dp[n][7];
  return 0;
}