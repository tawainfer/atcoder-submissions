// https://atcoder.jp/contests/abc303/submissions/41791179

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 2e18;

int main() {
  vector<ll> t(3);
  for(auto &z : t) cin >> z;

  string s;
  cin >> s;

  ll n = s.size();
  s = "!" + s;

  map<pair<ll, ll>, bool> caps;
  ll dp[n + 1][2];
  for(int i = 0; i <= n; i++) for(int j = 0; j < 2; j++) {
    dp[i][j] = (i == 0 ? 0 : INF);
    if(i == 0) caps[make_pair(i, j)] = false;
  }

  for(int i = 1; i <= n; i++) {
    bool need = (s[i] == 'A' ? true : false);
    
    for(int j = 0; j < 2; j++) {
      bool push = (j == 0 ? false : true);
      
      for(int k = 0; k < 2; k++) {
        bool last = caps[make_pair(i - 1, k)];
        bool rev = (last ^ push == need ? false : true);
        ll et = t[j] + (last ^ push == need ? 0 : t[2]);

        if(dp[i - 1][k] + et < dp[i][j]) {
          dp[i][j] = dp[i - 1][k] + et;
          caps[make_pair(i, j)] = caps[make_pair(i - 1, k)] ^ rev;
        }

      }
    }
  }

  cout << min(dp[n][0], dp[n][1]);
  return 0;
}
