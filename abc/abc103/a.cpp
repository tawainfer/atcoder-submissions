// https://atcoder.jp/contests/abc103/submissions/26606732

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << max({a, b, c}) - min({a, b, c});
}
