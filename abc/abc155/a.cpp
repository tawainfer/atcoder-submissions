// https://atcoder.jp/contests/abc155/submissions/26225739

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if((a == b && a != c && b != c) || (a == c && a != b && b != c) || (b == c && a != b && a != c)) cout << "Yes";
  else cout << "No";
}
