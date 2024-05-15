#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  int n, s; cin >> n >> s;
  vector<int> a(n);
  for(auto& z : a) cin >> z;

  bool dp[100][100000];
  dp[0][0] = true;

  for(int i = 0; i < n; i++) for(int j = 0; j <= s; j++) {
    if(dp[i][j]) {
      dp[i+1][j] = true;
      dp[i+1][j+a[i]] = true;
    }
  }

  cout << (dp[n][s] ? "Yes" : "No") << "\n";
}