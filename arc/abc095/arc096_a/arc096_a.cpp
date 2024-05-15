#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll a, b, c, x, y, ans = 0;
  cin >> a >> b >> c >> x >> y;

  while(x > 0 && y > 0) {
    if((a + b) >= 2 * c || a >= 2 * c || b >= 2 * c) ans += 2 * c;
    else ans += a + b;
    x--;
    y--;
  }

  if(x == 0 && y == 0) {
    cout << ans;
    return 0;
  }

  ll d, z;
  if(x > y) {
    z = x;
    d = a;
  } else {
    z = y;
    d = b;
  }

  while(z > 0) {
    if(d >= 2 * c) ans += 2 * c;
    else ans += d;
    z--;
  }

  cout << ans;
}