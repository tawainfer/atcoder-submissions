#include <bits/stdc++.h>
using namespace std;
int main() {
  int y, m, d; cin >> y >> m >> d;
  if(m == 1) {
    y--;
    m = 13;
  } else if (m == 2) {
    y--;
    m = 14;
  }
  cout << 735369 - ((365 * y) + floor(y / 4) - floor(y / 100) + floor(y / 400) + floor((306 * (m + 1)) / 10) + d - 429) << "\n";
}