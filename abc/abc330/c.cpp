// https://atcoder.jp/contests/abc330/submissions/47909892

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll d;
  cin >> d;

  ll ans = 2e18;
  for(ll x = 0; x <= 5000000; x++) {
    ll l = 0;
    ll r = 5000000;
    
    while(r - l > 1) {
      ll m = (l + r) / 2;
      ll score = x * x + m * m - d;

      if(score >= 0) {
        r = m;
      } else {
        l = m;
      }
    }

    ll s = 2e18;
    if(l - 1 >= 0) {
      s = min(s, abs(x * x + (l - 1) * (l - 1) - d));
    }
    s = min(s, abs(x * x + l * l - d));
    s = min(s, abs(x * x + r * r - d));
    s = min(s, abs(x * x + (r + 1) * (r + 1) - d));

    ans = min(ans, s);
  }

  cout << ans;
}
