// https://atcoder.jp/contests/abc153/submissions/26232305

#include <bits/stdc++.h>
using namespace std;
int main() {
  int h, a, count = 0;
  cin >> h >> a;
  while(h > 0) {
    h -= a;
    count++;
  }
  cout << count;
}
