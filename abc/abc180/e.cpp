// https://atcoder.jp/contests/abc180/submissions/41514733

#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9;

int cost(vector<int> cn, vector<int> en) {
  return abs(en[0] - cn[0]) + abs(en[1] - cn[1]) + max(0, en[2] - cn[2]);
}

int main() {
  int n;
  cin >> n;

  int x, y, z;
  vector<int> node[n];
  for(int i = 0; i < n; i++) {
    cin >> x >> y >> z;
    node[i] = {x, y ,z};
  }

  int dp[(1 << n)][n];
  for(int i = 0; i < (1 << n); i++) for(int j = 0; j < n; j++) dp[i][j] = INF;
  dp[1][0] = 0;

  for(int s = 0; s < (1 << n); s++) {
    for(int cp = 0; cp < n; cp++) {
      if(dp[s][cp] == INF) continue;

      for(int ep = 0; ep < n; ep++) {
        if(!(s & (1 << ep))) {
          dp[s + (1 << ep)][ep] = min(dp[s + (1 << ep)][ep], dp[s][cp] + cost(node[cp], node[ep]));
        }
      }
    }
  }

  int ans = INF;
  for(int i = 1; i < n; i++) ans = min(ans, dp[(1 << n) - 1][i] + cost(node[i], node[0]));

  cout << ans;
  return 0;
}
