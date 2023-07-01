// https://atcoder.jp/contests/abc136/submissions/30739894

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  int h[n + 1];
  cin >> h[1];

  bool dp[n + 1][2];
  dp[1][1] = true;
  dp[1][2] = true;

  for(int i = 2; i <= n; i++) {
    cin >> h[i];
    dp[i][1] = false;
    dp[i][2] = false;
    if(dp[i-1][1]) {
      if(h[i-1] <= h[i]) dp[i][1] = true;
      if(h[i-1] <= h[i] - 1) dp[i][2] = true;
    }
    if(dp[i-1][2]) {
      if(h[i-1] - 1 <= h[i]) dp[i][1] = true;
      if(h[i-1] - 1 <= h[i] - 1) dp[i][2] = true;
    }
  }

  cout << (dp[n][1] || dp[n][2] ? "Yes" : "No");
}
