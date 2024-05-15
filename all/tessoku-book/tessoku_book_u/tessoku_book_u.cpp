#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAX = 2009;

int main() {
  int n;
  cin >> n;

  vector<int> p(n + 1), a(n + 1);
  for(int i = 1; i <= n; i++) cin >> p[i] >> a[i];

  int dp[MAX][MAX];
  for(int i = 0; i < MAX; i++) for(int j = 0; j < MAX; j++) dp[i][j] = -INF;
  dp[1][n] = 0;

  vector<int> ml = {-1, 0};
  vector<int> mr = {0, 1};

  for(int len = n - 1; len >= 0; len--) {
    for(int l = 1; l <= n - len + 1; l++) {
      int r = l + len - 1;

      for(int j = 0; j < ml.size(); j++) {
        int bl = l + ml[j];
        int br = r + mr[j];
        int del_block = (j == 0 ? l - 1 : r + 1);
        if(!(1 <= bl && bl <= n && 1 <= br && br <= n)) continue;

        int bonus = (l <= p[del_block] && p[del_block] <= r ? a[del_block] : 0);
        dp[l][r] = max(dp[l][r], dp[bl][br] + bonus);
      }
    }
  }

  int ans = -INF;
  for(int i = 1; i <= n; i++) {
    ans = max(ans, dp[i][i]);
  }

  cout << ans;
  return 0;
}