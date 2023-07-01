// https://atcoder.jp/contests/abc219/submissions/25928755

#include <bits/stdc++.h>
using namespace std;
int main() {
  int X;
  cin >> X;
  if(X >= 90) cout << "expert";
  else if(X < 40) cout << 40 - X;
  else if(X < 70) cout << 70 - X;
  else cout << 90 - X;
}
