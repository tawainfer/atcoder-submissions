// https://atcoder.jp/contests/abc113/submissions/29147928

#include <bits/stdc++.h>
using namespace std;
int main() {
  double n, t, a, h, min = 1e9, ans = 1; cin >> n >> t >> a;
  for(int i = 0; i < n; i++) {
    cin >> h;
    double T = t - h * 0.006;
    double d = abs(a - T);
    if(d < min) {
      min = d;
      ans = i;
    }
  }
  cout << ans + 1;
}
