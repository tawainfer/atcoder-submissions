// https://atcoder.jp/contests/arc112/submissions/28646330

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, l, r; cin >> t;
  while(cin >> l >> r) {
    if(r - l < l) cout << 0 << "\n";
    else {
      long  a = r - (r - l) - l + 1, b = r - l - l + 1;
      cout << (a + b) * (b - a + 1) / 2 << "\n";
    }
  }
}
