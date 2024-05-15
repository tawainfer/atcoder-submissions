#include <bits/stdc++.h>
using namespace std;

const int MAX = 20009;

int main() {
  int n, s;
  cin >> n >> s;

  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  bool dp[n + 1][MAX];
  for(int i = 0; i <= n; i++) for(int j = 0; j < MAX; j++) dp[i][j] = false;
  dp[0][0] = true;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= s; j++) {
      if(dp[i][j]) {
        dp[i + 1][j] = true;
        dp[i + 1][j + a[i + 1]] = true;
      }
    }
  }

  if(!dp[n][s]) {
    cout << -1;
    return 0;
  }

  deque<int> d;
  int lp = n;
  int ls = s;

  for(int i = n; i >= 1; i--) {
    if(ls == 0) break;
    if(dp[i - 1][ls - a[i]]) {
      d.push_front(i);
      lp = i - 1;
      ls -= a[i];
    }
  }

  cout << d.size() << endl;
  for(int x : d) cout << x << " ";
  return 0;
}