#include <bits/stdc++.h>
#include <atcoder/lazysegtree>
using namespace std;
using namespace atcoder;
typedef long long ll;

ll op(ll a, ll b) {
  return a + b;
}

ll e() {
  return 0;
}

ll mapping(ll f, ll x) {
  return f + x;
}

ll composition(ll f, ll g) {
  return f + g;
}

ll id() {
  return 0;
}

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  vector<ll> tmp(n, 0);
  lazy_segtree<ll, op, e, ll, mapping, composition, id> seg(tmp);

  for (int i = 0; i < n; i++) {
    ll x = (ll)(s[i] - '0');
    seg.apply(i, n, x * (i + 1));
  }

  // for(int i = 0; i < n; i++) cout << seg.get(i) << " ";
  vector<ll> ans;
  for(int i = n - 1; i > 0; i--) {
    ans.push_back(seg.get(i) % 10);
    seg.apply(i - 1, i, seg.get(i) / 10);
  }
  ans.push_back(seg.get(0));
  reverse(ans.begin(), ans.end());

  for(auto x : ans) cout << x;
}
