#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long n, a; cin >> n;
  long long dp[n+1];
  dp[0] = 0;
  
  for(int i = 1; i <= n; i++) {
    cin >> a;
    if(i == 1) dp[1] = a;
    else dp[i] = max(dp[i-1], dp[i-2] + a);
  }
  
  cout << dp[n];
}