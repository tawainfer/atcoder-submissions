// https://atcoder.jp/contests/abc064/submissions/26585949

#include<bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  a *= 100;
  b *= 10;
  if((a + b + c) % 4 == 0) cout << "YES";
  else cout << "NO";
}
