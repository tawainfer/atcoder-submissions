// https://atcoder.jp/contests/abc330/submissions/47925561

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<vector<char>> f(n + 1, vector<char>(n + 1, '?'));
  vector<vector<ll>> sr(n + 1, vector<ll>(n + 1, 0));
  vector<vector<ll>> sc(n + 1, vector<ll>(n + 1, 0));
  for(ll i = 1; i <= n; i++) {
    for(ll j = 1; j <= n; j++) {
      cin >> f[i][j];
    }
  }

  for(ll i = 1; i <= n; i++) {
    for(ll j = 1; j <= n; j++) {
      sr[i][j] = sr[i][j - 1] + (f[i][j] == 'o' ? 1 : 0);
    }
  }

  for(ll i = 1; i <= n; i++) {
    for(ll j = 1; j <= n; j++) {
      sc[j][i] = sc[j - 1][i] + (f[j][i] == 'o' ? 1 : 0);
    }
  }

  // for(ll i = 0; i <= n; i++) {
  //   for(ll j = 0; j <= n; j++) {
  //     cout << f[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;

  // for(ll i = 0; i <= n; i++) {
  //   for(ll j = 0; j <= n; j++) {
  //     cout << sr[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;

  // for(ll i = 0; i <= n; i++) {
  //   for(ll j = 0; j <= n; j++) {
  //     cout << sc[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;

  long long ans = 0;
  for(ll i = 1; i <= n; i++) {
    for(ll j = 1; j <= n; j++) {
      if(f[i][j] != 'o') continue;
      ans += (sr[i][n] - 1) * (sc[n][j] - 1);
      // cout << i << " " << j << " " << (sr[i].back() - 1) << " " <<  (sc[j][n] - 1) << endl;
    }
  }

  cout << ans;
}
