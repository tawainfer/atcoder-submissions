#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  vector<int> h(n + 1);
  for(int i = 1; i <= n; i++) cin >> h[i];

  int dp[n + 1];
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = abs(h[1] - h[2]);

  for(int i = 3; i <= n; i++) {
    int mi = 1e9;
    for(int j = i - 1; j >= max(i - k, 1); j--) {
      mi = min(mi, dp[j] + abs(h[i] - h[j]));
    }

    dp[i] = mi;
  }

  cout << dp[n];
  return 0;
}