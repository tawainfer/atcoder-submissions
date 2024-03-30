// https://atcoder.jp/contests/abc347/submissions/51850343

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, q;
  cin >> n >> q;

  vector<vector<ll>> idx(n + 1);
  for(int i = 1; i <= n; i++) {
    idx[i].push_back(1);
  }

  set<ll> se;
  vector<ll> si(q + 1, 0);

  for(int i = 1; i <= q; i++) {
    ll x;
    cin >> x;

    idx[x].push_back(i);
    if(se.find(x) == se.end()) {
      se.insert(x);
    } else {
      se.erase(x);
    }

    si[i] = se.size();
  }

  for(int i = 1; i <= n; i++) {
    idx[i].push_back(q + 1);
  }

  for(int i = 1; i < si.size(); i++) {
    si[i] += si[i - 1];
  }

  vector<ll> ans(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    // for(auto x : idx[i]) cout << x << " ";
    // cout << endl;

    for(int j = 1; j < idx[i].size(); j++) {
      ll s = si[idx[i][j] - 1] - si[idx[i][j - 1] - 1];
      if(j % 2 == 0) {
        ans[i] += s;
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
}
