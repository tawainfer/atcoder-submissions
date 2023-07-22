// https://atcoder.jp/contests/abc311/submissions/43878639

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll h, w, n;
  cin >> h >> w >> n;

  set<pair<ll, ll>> trap;
  for(ll i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;
    a--;
    b--;
    trap.insert(make_pair(a, b));
  }

  vector<vector<ll>> f(h + 1, vector<ll>(w + 1, 0));
  for(ll i = h - 1; i >= 0; i--) {
    for(ll j = w - 1; j >= 0; j--) {
      if(trap.find(make_pair(i, j)) == trap.end()) {
        f[i][j] = min(f[i + 1][j], min(f[i][j + 1], f[i + 1][j + 1])) + 1;
      } else {
        f[i][j] = 0;
      }
    }
  }

  ll ans = 0;
  for(ll i = 0; i < h; i++) {
    for(ll j = 0; j < w; j++) {
      ans += f[i][j];
    }
  }

  cout << ans;
  return 0;
}
