#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 2e18;

ll op(ll a, ll b) {
  return max(a, b);
}

ll e() {
  return -INF;
}

ll target;
bool f(ll x) {
  return x < target;
}

int main() {
  ll n, q;
  cin >> n >> q;

  segtree<ll, op, e> seg(n + 1);
  for(ll i = 1; i <= n; i++) {
    ll x;
    cin >> x;
    seg.set(i, x);
  }

  for(ll _ = 0; _ < q; _++) {
    ll t;
    cin >> t;

    if(t == 1) {
      ll x, v;
      cin >> x >> v;
      seg.set(x, v);
    } else if(t == 2) {
      ll l, r;
      cin >> l >> r;
      cout << seg.prod(l, r + 1) << endl;
    } else if(t == 3) {
      ll x;
      cin >> x >> target;
      cout << seg.max_right<f>(x) << endl;
    }
  }
}