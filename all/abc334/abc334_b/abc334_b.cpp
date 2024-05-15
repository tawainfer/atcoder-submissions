#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll a, m, l, r;
  cin >> a >> m >> l >> r;
  l -= a;
  r -= a;

  // cout << l << " " << r << endl;

  ll ans = 0;
  if(l <= 0 && 0 <= r) {
    ans++;
  }
  // cout << ans << endl;

  if(r > 0) {
    ans += r / m - max(l - 1, 0LL) / m;
  }
  // cout << ans << endl;

  if(l < 0) {
    ans += abs(l) / m - abs(min(r + 1, 0LL)) / m;
  }
  // cout << ans << endl;

  cout << ans;
}