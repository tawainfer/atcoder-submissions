#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 9;

int main() {
  int n;
  cin >> n;

  vector<int> h(n + 1);
  for(int i = 1; i <= n; i++) cin >> h[i];
  
  vector<int> dp(n + 1, INF);
  dp[1] = 0;

  for(int i = 1; i < n; i++) {
    dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
    dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
  }

  deque<int> ans = {n};
  int cp = n;
  while(cp > 1) {
    if(dp[cp] == dp[cp - 1] + abs(h[cp] - h[cp - 1])) {
      ans.push_front(cp - 1);
      cp--;
    } else {
      ans.push_front(cp - 2);
      cp -= 2;
    }
  }

  cout << ans.size() << endl;
  for(int x : ans) cout << x << " ";
  return 0;
}