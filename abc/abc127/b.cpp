// https://atcoder.jp/contests/abc127/submissions/27291189

#include <bits/stdc++.h>
using namespace std;
int main() {
  int r, d, x, y; cin >> r >> d >> x;
  for(int i = 0; i < 10; i++) {
    x = r * x - d;
    cout << x << endl;
  }
}
