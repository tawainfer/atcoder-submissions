#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int h, n;
  cin >> h >> n;

  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

  vector<int> dp(h + 1, INF);
  dp[h] = 0;
  for(int i = h; i > 0; i--) {
    for(int j = 0; j < n; j++) {
      int idx = max(i - a[j], 0);
      dp[idx] = min(dp[idx], dp[i] + b[j]);
    }
  }

  cout << dp[0];
  return 0;
}