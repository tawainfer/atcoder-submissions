// https://atcoder.jp/contests/abc046/submissions/26606471

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a == b && b == c) cout << 1;
  else if((a == b && a != c) || (a != b && a == c)  || (b == c && a != b)) cout << 2;
  else cout << 3;
}
