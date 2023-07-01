// https://atcoder.jp/contests/abc129/submissions/39167699

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int a;
  set<int> s;
  while(cin >> a) s.insert(a);

  vector<bool> seen(100009, false);
  vector<int> dp(100009, 0);
  dp[0] = 1;

  int mod = 1e9 + 7;
  for(int i = 1; i <= n; i++) {
    if(s.find(i) != s.end()) continue;
    for(int j = 1; j <= 2; j++) {
      if(i - j < 0) break;
      dp[i] += dp[i - j];
      dp[i] %= mod;
    }
  }

  cout << dp[n];
  return 0;
}
