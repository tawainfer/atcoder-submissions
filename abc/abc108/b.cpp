// https://atcoder.jp/contests/abc108/submissions/29163497

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;
  int x = c - a, y = d - b;
  cout << c-y << " " << d+x<< " " << a-y <<" " << b+x;
}
