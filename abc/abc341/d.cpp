// https://atcoder.jp/contests/abc341/submissions/50406812

// https://atcoder.jp/contests/abc341/submissions/50390543

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, k;
  cin >> n >> m >> k;

  ll lc = lcm(n, m);
  ll l = 0;
  ll r = 2e18;

  while(r - l > 1) {
    ll mid = (l + r) / 2;
    ll cnt = (mid / n) + (mid / m) - (mid / lc) * 2;
    
    if(cnt < k) {
      l = mid;
    } else {
      r = mid;
    }
  }

  cout << r;
}
