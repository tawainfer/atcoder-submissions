#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;

  vector<ll> a(n + 1);
  a[0] = 0;
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<ll> b = {0};
  for(int i = 1; i <= n; i++) {
    b.push_back(b.back() + a[i]);
  }

  ll ma = -1e18;
  ll last = 0;
  ll ans = 0;

  for(int i = 1; i <= n; i++) {
    ll d = b[i] - b[0];
    ma = max(d, ma);
    ans = max(ans, last + ma);
    last += d;
  }

  cout << ans;
  return 0;
}