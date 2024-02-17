// https://atcoder.jp/contests/abc341/submissions/50390543

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, k;
  cin >> n >> m >> k;

  ll lc = lcm(n, m);
  ll ok = 1;
  ll ng = 2e18;

  while(ng - ok > 1) {
    ll mid = (ok + ng) / 2;
    ll cnt = (mid / n) + (mid / m) - (mid / lc) * 2;
    
    if(cnt < k || (cnt == k && mid % lc != 0) && !(mid % n == 0 && mid % m == 0 || mid % n != 0 && mid % m != 0)) {
      ok = mid;
    } else {
      ng = mid;
    }
  }

  cout << ok;
}
