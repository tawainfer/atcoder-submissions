#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(m);
  for(auto &z : a) cin >> z;

  vector<ll> r(n + 2, 0);
  for(ll i = 1; i < m; i++) {
    ll x = a[i - 1];
    ll y = a[i];
    if(x > y) swap(x, y);

    ll d = y - x;
    ll rd = n - d;

    r[x] += rd;
    r[y] -= rd;
    r[y] += d;
    r[n + 1] -= d;
    r[1] += d;
    r[x] -= d;
  }

  for(ll i = 1; i < r.size(); i++) {
    r[i] += r[i - 1];
  }

  ll ans = INF;
  for(int i = 1; i <= n; i++) {
    ans = min(ans, r[i]);
  }

  cout << ans;
}