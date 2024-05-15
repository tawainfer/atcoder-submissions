#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll k, a, b;
  cin >> k >> a >> b;

  ll ans = 0;
  ll n = 1;
  if(a + 2 < b) {
    n += min(k, a - n);
    k -= n - 1;

    if(k > 0) {
      n += k / 2 * (b - a);
      if(k % 2) n += 1;
    }

    ans = n;
  } else ans = k + 1;

  cout << ans;
  return 0;
}