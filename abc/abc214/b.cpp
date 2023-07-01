// https://atcoder.jp/contests/abc214/submissions/27291458

#include <bits/stdc++.h>
using namespace std;
int main() {
  int s, t, a = 0, b = 0, c = 0, ans = 0; cin >> s >> t;
  for(; a + b + c <= s && a * b * c <= t; a++) {
    for(; a + b + c <= s && a * b * c <= t; b++) {
      for(; a + b + c <= s && a * b * c <= t; c++) {
        ans++;
      }
      c = 0;
    }
    b = 0;
  }
  cout << ans;
}
