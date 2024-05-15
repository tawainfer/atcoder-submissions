#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int x; cin >> x;
  vector<bool> dp(114514, false);
  dp[0] = true;

  for(int i = 0; i < x; i++) if(dp[i]) for(int j = 0; j < 6; j++) {
    dp[i + j + 100] = true;
  }
  cout << (dp[x] ? 1 : 0);
}