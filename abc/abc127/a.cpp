// https://atcoder.jp/contests/abc127/submissions/26260590

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if(a < 6) cout << 0;
  else if(a < 13) cout << b / 2;
  else cout << b;
}
