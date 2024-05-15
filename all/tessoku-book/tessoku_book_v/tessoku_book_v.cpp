#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> b(n);
  for(int i = 1; i < n; i++) cin >> a[i];
  for(int i = 1; i < n; i++) cin >> b[i];
  
  vector<int> dp(n + 1, -INF);
  dp[1] = 0;

  for(int i = 1; i < n; i++) {
    if(dp[i] != -INF) {
      dp[a[i]] = max(dp[a[i]], dp[i] + 100);
      dp[b[i]] = max(dp[b[i]], dp[i] + 150);
    }
  }

  cout << dp[n];
  return 0;
}