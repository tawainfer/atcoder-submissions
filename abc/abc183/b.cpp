// https://atcoder.jp/contests/abc183/submissions/28671812

#include<bits/stdc++.h>
using namespace std;
int main() {
  double sx, sy, gx, gy; cin >> sx >> sy >> gx >> gy;
  gx -= sx;
  double ans = gx / ((gy / sy) + 1) + sx;
  cout << fixed << setprecision(7) << ans;
}
