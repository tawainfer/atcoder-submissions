#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  pair<ll, ll> s = make_pair(sx, sy);
  pair<ll, ll> t = make_pair(tx, ty);
  if(sy > ty)  swap(s, t);
  sx = s.first;
  sy = s.second;
  tx = t.first;
  ty = t.second;

  ll ans = ty - sy;
  if(sx < tx) {
    if((sy % 2 == 0 && sx % 2 == 0) || (sy % 2 == 1 && sx % 2 == 1)) {
      sx++;
    }
    if(sx + (ty - sy) < tx) {
      sx += (ty - sy);
      ans += (tx - sx + 1) / 2;
    }
  } else if(sx > tx) {
    if((sy % 2 == 0 && sx % 2 == 1) || (sy % 2 == 1 && sx % 2 == 0)) {
      sx--;
    }
    if(tx < sx - (ty - sy)) {
      sx -= (ty - sy);
      ans += (sx - tx + 1) / 2;
    }
  }
  cout << ans;
}