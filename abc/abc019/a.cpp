// https://atcoder.jp/contests/abc019/submissions/26662451

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c; cin >> a >> b >> c;
  cout << (a + b + c) - min({a, b, c}) - max({a, b, c}) << endl;
}
