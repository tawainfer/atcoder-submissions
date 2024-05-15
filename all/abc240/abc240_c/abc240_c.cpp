#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, x; cin >> n >> x;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
  vector dp(n + 1, vector(x + 1, false));
  dp[0][0] = true;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= x; j++) {
      if(dp[i][j]) {
        if(j + a[i] <= x) dp[i + 1][j + a[i]] = true;
        if(j + b[i] <= x) dp[i + 1][j + b[i]] = true;
      }
    }
  }
  if(dp[n][x]) cout << "Yes";
  else cout << "No";
}