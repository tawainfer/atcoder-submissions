// https://atcoder.jp/contests/abc165/submissions/26203264

#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, a, b;
  cin >> k >> a >> b;
  if(a <= (b / k * k)) cout << "OK";
  else cout << "NG";
}
