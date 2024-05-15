#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, s;
  cin >> n >> s;

  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

  bool dp[109][10009];
  for(int i = 0; i < 109; i++)
    for(int j = 0; j < 10009; j++) dp[i][j] = false;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= 10000; j++) {
      if(i == 0) {
        dp[0][a[i]] = true;
        dp[0][b[i]] = true;
        break;
      } else {
        if(dp[i - 1][j]) {
          if(j + a[i] <= 10000) dp[i][j + a[i]] = true;
          if(j + b[i] <= 10000) dp[i][j + b[i]] = true;
        }
      }
    }
  }

  if(!dp[n - 1][s]) {
    cout << "No\n";
    return 0;
  } else cout << "Yes\n";

  int j = s;
  vector<char> ans;
  for(int i = n - 1; i > 0; i--) {
    if(dp[i - 1][j - a[i]]) {
      ans.push_back('H');
      j -= a[i];
    } else {
      ans.push_back('T');
      j -= b[i];
    }
  }
  ans.push_back((j == a[0] ? 'H' : 'T'));

  reverse(ans.begin(), ans.end());
  for(auto &z : ans) cout << z;
  cout << "\n";

  return 0;
}