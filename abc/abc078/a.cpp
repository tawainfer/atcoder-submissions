// https://atcoder.jp/contests/abc078/submissions/26578078

#include <bits/stdc++.h>
using namespace std;
int main() {
  char x, y;
  cin >> x >> y;
  if(x < y) cout << '<';
  else if(x == y) cout << '=';
  else cout << '>';
}
