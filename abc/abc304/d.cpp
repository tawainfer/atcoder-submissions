// https://atcoder.jp/contests/abc304/submissions/41960480

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll w, h, n;
  cin >> w >> h >> n;

  vector<pair<ll, ll>> p;
  ll x, y;
  for(int i = 0; i < n; i++) {
    cin >> x >> y;
    p.push_back(make_pair(x, y));
  }
  sort(p.begin(), p.end());

  ll A;
  cin >> A;

  vector<ll> a(A + 1);
  for(int i = 1; i <= A; i++) cin >> a[i];
  a[0] = 0;
  a.push_back(1000000009);

  ll B;
  cin >> B;

  vector<ll> b(B + 1);
  for(int i = 1; i <= B; i++) cin >> b[i];
  b[0] = 0;
  b.push_back(1000000009);

  const ll INF = 2e18;
  ll mi = INF;
  ll ma = -INF;

  // a search
  for(int i = 1; i <= A + 1; i++) {
    auto iter_l = lower_bound(p.begin(), p.end(), make_pair(a[i - 1], -INF));
    auto iter_r = lower_bound(p.begin(), p.end(), make_pair(a[i], -INF));

    vector<ll> t;
    while(iter_l != iter_r) {
      t.push_back((*iter_l).second);
      iter_l++;
    }

    // cout << i << endl;
    // for(auto x : t) cout << x << " ";
    // cout << endl;

    map<ll, ll> m;
    for(auto x : t) {
      auto iter = lower_bound(b.begin(), b.end(), x);
      ll idx = distance(b.begin(), iter);
      m[b[idx]]++;
    }

    ll tmi = INF;
    ll tma = -INF;
    for(auto v : m) {
      tmi = min(tmi, v.second);
      tma = max(tma, v.second);
    }

    if(m.size() != B + 1) tmi = 0;

    mi = min(mi, tmi);
    ma = max(ma, tma);
  }

  cout << mi << " " << ma;
}
