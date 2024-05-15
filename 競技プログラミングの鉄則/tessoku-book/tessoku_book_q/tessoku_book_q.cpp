#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9;

int main() {
  int n;
  cin >> n;

  vector<int> a(n + 1), b(n + 1);
  for(int i = 2; i <= n; i++) cin >> a[i];
  for(int i = 3; i <= n; i++) cin >> b[i];

  vector<int> dp(n + 2, INF);
  dp[1] = 0;

  for(int i = 1; i < n; i++) {
    dp[i + 1] = min(dp[i + 1], dp[i] + a[i + 1]);
    dp[i + 2] = min(dp[i + 2], dp[i] + b[i + 2]);
  }

  deque<int> prev;
  for(int i = n; i >= 1; i--) {
    prev.push_front(i);
    if(dp[i - 1] + a[i] != dp[i]) i--;
  }

  cout << prev.size() << endl;
  for(auto x : prev) cout << x << " ";
}