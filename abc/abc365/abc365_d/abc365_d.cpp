#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

bool isWin(ll p1, ll p2) {
  return (p1 - p2 + 3) % 3 == 2;
}
bool isLose(ll p1, ll p2) {
  return (p1 - p2 + 3) % 3 == 1;
}

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  vector<ll> v;
  for(auto c : s) {
    if(c == 'R') {
      v.push_back(0);
    } else if(c == 'S') {
      v.push_back(1);
    } else if(c == 'P') {
      v.push_back(2);
    }
  }

  vector<vector<ll>> dp(3, vector<ll>(n + 1, -INF));
  for(int i = 0; i < 3; i++) {
    dp[i][0] = 0;
  }

  for(int i = 0; i < 3; i++) {
    dp[i][1] = (isWin(i, v[0]) ? 1 : 0);
  }

  for(int i = 2; i <= n; i++) {
    for(int j = 0; j < 3; j++) {
      if(isLose(j, v[i - 1])) {
        dp[j][i] = 0;
        continue;
      }

      dp[j][i] = max(dp[(j + 1) % 3][i - 1], dp[(j + 2) % 3][i - 1]);
      dp[j][i] += (isWin(j, v[i - 1]) ? 1 : 0);
    }
  }

  cout << max(dp[0][n], max(dp[1][n], dp[2][n])) << endl;

  // for(int i = 0; i < 3; i++) {
  //   for(int j = 0; j < dp[i].size(); j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
}