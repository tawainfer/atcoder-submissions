// https://atcoder.jp/contests/abc326/submissions/46992358

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if(x <= y && abs(y - x) <= 2) {
    cout << "Yes";
    return 0;
  }

  if(x >= y && abs(y - x) <= 3) {
    cout << "Yes";
    return 0;
  }

  cout << "No";
}
