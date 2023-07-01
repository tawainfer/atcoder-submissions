// https://atcoder.jp/contests/abc196/submissions/30546219

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n;
  cin >> n;
  ll m = n;
  ll size = 0;
  while(m) {
    m /= 10;
    size++;
  }

  ll ans = 0;
  ans = pow(10, (size / 2 + 1) - 1) - 1;

  if(size % 2 == 0 && size != 0) {
    ll z = size / 2 - 1;
    z = pow(10, z);
    ll y = pow(10, size / 2) + 1;
    z = pow(10, size - 1) + z;
    for(ll i = z; i < pow(10, size); i += y) {
      if(i > n) ans--;
    }
  }
  cout << ans;
}
