#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, d;
  cin >> n >> m >> d;

  vector<ll> a(n);
  vector<ll> b(m);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll ans = -1;
  for(int i = 0; i < n; i++) {
    auto iter_l = lower_bound(b.begin(), b.end(), a[i] - d);
    auto iter_r = upper_bound(b.begin(), b.end(), a[i] + d);
    if(iter_l == iter_r) continue;

    iter_r--;
    ans = max(ans, a[i] + (*iter_r));
  }

  cout << ans;
}