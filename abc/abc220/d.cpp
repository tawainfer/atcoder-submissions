// https://atcoder.jp/contests/abc220/submissions/38147906

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll mod = 998244353;
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  ll dp[n + 1][10];
  for(int i = 0; i < n + 1; i++) {
    for(int j = 0; j < 10; j++) dp[i][j] = 0;
  }

  dp[0][a[0]] = 1;
  for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < 10; j++) {
      ll k = (j + a[i + 1]) % 10;
      dp[i + 1][k] += dp[i][j];
      dp[i + 1][k] %= mod;

      k = j * a[i + 1] % 10;
      dp[i + 1][k] += dp[i][j];
      dp[i + 1][k] %= mod;
    }
  }

  for(int j = 0; j < 10; j++) cout << dp[n - 1][j] << " ";
}
