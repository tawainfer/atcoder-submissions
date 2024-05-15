#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, a, b, p, q, r, s;
  cin >> n >> a >> b >> p >> q >> r >> s;

  ll lk1 = max(1 - a, 1 - b);
  ll rk1 = min(n - a, n - b);
  ll lk2 = max(1 - a, b - n);
  ll rk2 = min(n - a, b - 1);

  ll ly1 = a + lk1;
  ll ry1 = a + rk1;
  ll lx1 = b + lk1;
  ll rx1 = b + rk1;
  ll ly2 = a + lk2;
  ll ry2 = a + rk2;
  ll lx2 = b - lk2;
  ll rx2 = b - rk2;

  for(ll y = p; y <= q; y++) {
    for(ll x = r; x <= s; x++) {
      if(ly1 <= y && y <= ry1 && lx1 <= x && x <= rx1 && (ly1 - lx1) == (y - x)) cout << '#';
      else if(ly2 <= y && y <= ry2 && rx2 <= x && x <= lx2 && (ly2 - y) == -(lx2 - x)) cout << '#';
      else cout << '.';
    }
    cout << endl;
  }
}