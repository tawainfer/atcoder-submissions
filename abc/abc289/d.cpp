// https://atcoder.jp/contests/abc289/submissions/38798458

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  int m;
  cin >> m;

  set<int> b;
  int t;
  for(int i = 0; i < m; i++) {
    cin >> t;
    b.insert(t);
  }

  int x;
  cin >> x;

  vector<bool> dp(100009, false);
  dp[0] = true;
  for(int i = 1; i <= x; i++) {
    if(b.find(i) != b.end()) continue;

    for(auto &d : a) {
      if((i - d) < 0) break;
      if(dp[i - d]) dp[i] = true;
    }
  }

  cout << (dp[x] ? "Yes" : "No");
  return 0;
}
