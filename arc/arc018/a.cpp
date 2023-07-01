// https://atcoder.jp/contests/arc018/submissions/26967564

#include <bits/stdc++.h>
using namespace std;
int main() {
  double h, b;
  cin >> h >> b;
  h /= 100;
  cout << (double)(pow(h, 2) * b);
}
