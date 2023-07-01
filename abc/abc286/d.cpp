// https://atcoder.jp/contests/abc286/submissions/38220550

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, x;
  cin >> n >> x;

  bool dp[n + 1][100009];
  // for(int i = 0; i < n + 1; i++) for(int j = 0; j < 10009; j++) {
  //   cin >> dp[i][j] = 0;
  // }
  dp[0][0] = true;

  ll a, b;
  for(int i = 1; i <= n; i++) {
    cin >> a >> b;

    for(int j = 0; j < 100009; j++) {
      if(dp[i - 1][j]) {
        dp[i][j] = true;
        for(int k = 1; k <= b; k++) {
          if(j + a * k >= 100009) break;
          dp[i][j + a * k] = true;
        }
      }
    }
  }

  // for(int i = 0; i <= n; i++) {
  //   for(int j = 0; j < 20; j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  if(dp[n][x]) cout << "Yes";
  else cout << "No";
}
