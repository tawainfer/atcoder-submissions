#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, k;
  cin >> n >> m >> k;

  vector<ll> a(n), b(m);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;
  
  for(ll i = 1; i < n; i++) a[i] += a[i - 1];
  for(ll i = 1; i < m; i++) b[i] += b[i - 1];
  a.push_back(0);

  ll ans = 0;
  for(ll i = 0; i <= n; i++) {
    if(a[i] > k) continue;;
    auto iter = upper_bound(b.begin(), b.end(), k - a[i]);
    ll idx = distance(b.begin(), iter);
    if(iter == b.end()) idx = b.size();

    if(i == n) ans = max(ans, idx);
    else ans = max(ans, i + 1 + idx);
  }

  cout << ans;
  return 0;
}