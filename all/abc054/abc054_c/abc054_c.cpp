#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  set<int> g[9];
  int a, b;
  while(cin >> a >> b) {
    g[a].insert(b);
    g[b].insert(a);
  }

  int dp[(1 << n)][9];
  for(int i = 0; i < (1 << n); i++) for(int j = 0; j < 9; j++) {
    dp[i][j] = 0;
  }
  dp[1][1] = 1;

  queue<pair<int, int>> q;
  q.push(make_pair(1, 1));
  map<pair<int, int>, int> ma;
  ma[q.front()]++;

  while(!q.empty()) {
    int s = q.front().first;
    int last = q.front().second;

    ma[q.front()]--;
    q.pop();
    if(ma[make_pair(s, last)] != 0) continue;

    for(int i = 0; i < n; i++) {
      if(!(s & (1 << i)) && g[last].find(i + 1) != g[last].end()) {
        dp[s + (1 << i)][i + 1] += dp[s][last];
        // cout << last << " " << i + 1 << endl;
        q.push(make_pair(s + (1 << i), i + 1));
        ma[make_pair(s + (1 << i), i + 1)]++;
      }
    }
  }

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    ans += dp[(1 << n) - 1][i];
    // cout << dp[(1 << n) - 1][i] << " ";
  }
  // cout << endl;

  cout << ans;
  return 0;
}