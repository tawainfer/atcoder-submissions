// https://atcoder.jp/contests/abc245/submissions/30446786

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);
  for(auto& z : a) cin >> z;
  for(auto& z : b) cin >> z;

  bool dp[1000000][2];
  dp[0][0] = true;
  dp[0][1] = true;
  for(int i = 1; i < n; i++) {
    if(dp[i-1][0]) {
      if(abs(a[i-1] - a[i]) <= k) dp[i][0] = true;
      if(abs(a[i-1] - b[i]) <= k) dp[i][1] = true;
    }
    if(dp[i-1][1]) {
      if(abs(b[i-1] - a[i]) <= k) dp[i][0] = true;
      if(abs(b[i-1] - b[i]) <= k) dp[i][1] = true;
    }
    if(!dp[i][0] && !dp[i][1]) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}
