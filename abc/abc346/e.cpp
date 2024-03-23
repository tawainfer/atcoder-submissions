// https://atcoder.jp/contests/abc346/submissions/51612533

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll h, w, m;
  cin >> h >> w >> m;

  vector<vector<ll>> v;
  for(ll i = 0; i < m; i++) {
    ll t, a, x;
    cin >> t >> a >> x;
    v.push_back({t, a, x});
  }

  vector<ll> cy(h + 1, INF);
  vector<ll> cx(w + 1, INF);
  ll by = h;
  ll bx = w;
  map<ll, ll> ma;

  for(ll i = m - 1; i >= 0; i--) {
    if(v[i][0] == 1) {
      if(cy[v[i][1]] != INF) continue;
      cy[v[i][1]] = v[i][2];
      if(bx > 0) ma[v[i][2]] += bx;
      by--;
    } else if(v[i][0] == 2) {
      if(cx[v[i][1]] != INF) continue;
      cx[v[i][1]] = v[i][2];
      if(by > 0) ma[v[i][2]] += by;
      bx--;
    }
  }

  ll all = h * w;
  set<ll> se;
  for(auto p : ma) {
    se.insert(p.first);
    all -= p.second;
  }

  ma[0] += all;
  se.insert(0);

  vector<ll> ans;
  for(auto x : se) {
    if(ma[x] != 0) {
      ans.push_back(x);
    }
  }

  cout << ans.size() << endl;
  for(auto x : ans) {
    cout << x << " " << ma[x] << endl;
  }
}
