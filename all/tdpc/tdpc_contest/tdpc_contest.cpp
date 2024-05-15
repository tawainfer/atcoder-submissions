#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> p(n + 1);
  for(int i = 1; i <= n; i++) cin >> p[i];

  bool dp[109][10009];
  dp[0][0] = true;
  
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < 10009; j++) {
      if(dp[i - 1][j]) {
        dp[i][j] = true;
        if(p[i] + j < 10009) dp[i][p[i] + j] = true;
      }

      if(i == n && dp[i][j]) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}