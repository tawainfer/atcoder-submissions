#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;
  int h[n + 1];
  for(int i = 1; i <= n; i++) cin >> h[i];

  int dp[114514];
  dp[1] = 0;
  dp[2] = abs(h[1] - h[2]);

  for(int i = 3; i <= n; i++) {
    dp[i] =
      min(abs(h[i - 1] - h[i]) + dp[i - 1], abs(h[i - 2] - h[i]) + dp[i - 2]);
  }
  cout << dp[n];
}