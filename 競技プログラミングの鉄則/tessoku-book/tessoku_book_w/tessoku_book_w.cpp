#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int bin_to_dec(string s) {
  int res = 0;
  for(int i = 0; i < (int)s.size(); i++) {
    if(s[i] == '1') res += pow(2, i);
  }

  return res;
}

int main() {
  int n, m;
  cin >> n >> m;

  char c;
  vector<string> a(m + 1);

  for(int i = 1; i <= m; i++) {
    string s = "";
    for(int j = 0; j < n; j++) {
      cin >> c;
      s += c;
    }

    a[i] = s;
  }

  int dp[m + 1][(1 << n) + 1];
  for(int j = 0; j <= m; j++) for(int i = 0; i < (1 << n); i++) dp[j][i] = INF;
  dp[0][0] = 0;

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < (1 << n); j++) {
      if(dp[i][j] == INF) continue;

      int k = bin_to_dec(a[i + 1]);
      if((j | k) != j) dp[i + 1][j | k] = min(dp[i + 1][j | k], dp[i][j] + 1);
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
    }
  }

  if(dp[m][(1 << n) - 1] == INF) cout << -1;
  else cout << dp[m][(1 << n) - 1];
  return 0;
}