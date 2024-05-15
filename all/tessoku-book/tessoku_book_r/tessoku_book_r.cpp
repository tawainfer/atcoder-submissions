#include <bits/stdc++.h>
using namespace std;

const int MAX = 20009;

int main() {
  int n, s;
  cin >> n >> s;

  vector<int> a(n + 1, 0);
  for(int i = 1; i <= n; i++) cin >> a[i];

  bool dp[n + 1][MAX];
  for(int i = 0; i < n + 1; i++) for(int j = 0; j < MAX; j++) dp[i][j] = false;
  dp[0][0] = true;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= s; j++) {
      if(dp[i][j]) {
        dp[i + 1][j] = true;
        dp[i + 1][j + a[i + 1]] = true;
      }
    }
  }

  cout << (dp[n][s] ? "Yes" : "No");
  return 0;
}