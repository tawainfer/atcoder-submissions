// https://atcoder.jp/contests/abc098/submissions/26576906

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  cout << max({a + b, a - b, a * b});
}
