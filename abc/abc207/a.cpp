// https://atcoder.jp/contests/abc207/submissions/25512009

#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a < b && a < c) cout << b + c;
  else if(b < a && b < c) cout << a + c;
  else cout << a + b;
}
