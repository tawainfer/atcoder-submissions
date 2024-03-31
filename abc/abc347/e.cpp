// https://atcoder.jp/contests/abc347/submissions/51902383

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
  vector<ll> l(q + 1, 0);

  for(int i = 1; i <= q; i++) {
    ll x;
    cin >> x;

    idx[x].push_back(i);
    if(se.find(x) == se.end()) {
      se.insert(x);
    } else {
      se.erase(x);
    }

    l[i] = se.size();
  }

  for(int i = 1; i <= n; i++) {
    idx[i].push_back(q + 1);
  }

  for(int i = 1; i < l.size(); i++) {
    l[i] += l[i - 1];
  }

  vector<ll> ans(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j < idx[i].size(); j++) {
      ll s = l[idx[i][j] - 1] - l[idx[i][j - 1] - 1];
      if(j % 2 == 0) {
        ans[i] += s;
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
}

