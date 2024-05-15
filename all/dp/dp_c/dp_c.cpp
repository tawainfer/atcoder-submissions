#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  int a[n][3];
  for(int i = 0; i < n; i++) for(int j = 0; j < 3; j++) cin >> a[i][j];

  int dp[n][3];
  for(int i = 0; i < n; i++) {
    if(i == 0) {
      for(int j = 0; j < 3; j++) dp[0][j] = a[0][j];
    } else {
      for(int j = 0; j < 3; j++) {
        dp[i][j] = -1e9;
        for(int k = 0; k < 3; k++) {
          if(j == k) continue;
          dp[i][j] = max(dp[i][j], dp[i - 1][k] + a[i][j]);
        }
      }
    }
  }

  cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
  return 0;
}