// https://atcoder.jp/contests/abc319/submissions/45455048

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc(ll s, ll &x, ll &y, vector<pair<ll, ll>> &p) {
  s += x;
  for(int i = 0; i < p.size(); i++) {
    s = (s + p[i].first - 1) / p[i].first * p[i].first;
    s += p[i].second;
  }

  s += y;
  return s;
}

int main() {
  ll n, x, y;
  cin >> n >> x >> y;

  vector<pair<ll, ll>> p;
  for(int _ = 0; _ < n - 1; _++) {
    ll a, b;
    cin >> a >> b;
    p.push_back(make_pair(a, b));
  }

  const ll MOD = 840;
  vector<ll> ans(MOD);
  for(int i = 0; i < MOD; i++) {
    ans[i] = calc(i, x, y, p);
  }

  ll q;
  cin >> q;

  for(int _ = 0; _ < q; _++) {
    ll t;
    cin >> t;
    cout << ans[t % MOD] + (t - t % MOD) << endl;
  }
}
