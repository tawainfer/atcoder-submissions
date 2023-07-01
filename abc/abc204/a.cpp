// https://atcoder.jp/contests/abc204/submissions/25512351

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y;
  if(x == y) z = x;
  else if((x == 0 && y == 1) || (x == 1 && y == 0)) z = 2;
  else if((x == 0 && y == 2) || (x == 2 && y == 0)) z = 1;
  else z = 0;
  cout << z;
}
