#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 100000;

ll calc(ll x) {
  string s = to_string(x);
  ll y = 0;

  for(char c : s) {
    y += (ll)(c - '0');
  }

  ll z = (x + y) % MOD;
  return z;
}

int main() {
  ll n, k;
  cin >> n >> k;

  ll x = ceil(log2(k)) + 1;
  ll y = 100000;
  vector<vector<ll>> dp(x, vector<ll>(y));
  for(int i = 0; i <= dp[0].size(); i++) {
    dp[0][i] = calc(i);
  }

  for(int i = 1; i < x; i++) {
    for(int j = 0; j < y; j++) {
      dp[i][j] = dp[i - 1][dp[i - 1][j]];
    }
  }

  for(int i = 0; i < x; i++) {
    if(k & (1LL << i)) {
      n = dp[i][n];
    }
  }
  cout << n;
}