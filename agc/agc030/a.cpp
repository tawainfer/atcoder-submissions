// https://atcoder.jp/contests/agc030/submissions/29019256

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, ans = 0; cin >> a >> b >> c;
  ans += b;
  if(c != 0) {
    if(a + b > c - 2) {
      ans += c;
    } else {
      ans += a + b + 1;
    }
  }
  cout << ans;
}
