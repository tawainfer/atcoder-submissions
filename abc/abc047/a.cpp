// https://atcoder.jp/contests/abc047/submissions/26606531

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a + b == c || a + c == b || b + c == a) cout << "Yes";
  else cout << "No";
}
