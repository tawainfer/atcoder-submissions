#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;

  string s;
  cin >> s;

  ll mod = 1000000007;
  vector<char> ptn = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
  ll dp[8][n + 1];
  for(int i = 0; i <= 7; i++) {
    for(int j = 0; j <= n; j++) dp[i][j] = 0;
  }
  for(int i = 0; i <= n; i++) dp[0][i] = 1;

  for(int i = 1; i <= 7; i++) {
    for(int j = 1; j <= n; j++) {
      dp[i][j] += dp[i][j - 1];
      if(s[j - 1] == ptn[i - 1]) dp[i][j] += dp[i - 1][j - 1];
      dp[i][j] %= mod;
    }
  }

  // for(int i = 0; i <= 7; i++) {
  //   for(int j = 0; j <= n; j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  cout << dp[7][n];
}