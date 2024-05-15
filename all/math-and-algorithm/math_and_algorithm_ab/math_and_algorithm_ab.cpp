#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n; cin >> n;
  int dp[46];
  dp[0] = 1; dp[1] = 1;
  for(int i = 2; i <= n; i++) dp[i] = dp[i-1] + dp[i-2];
  cout << dp[n];
}