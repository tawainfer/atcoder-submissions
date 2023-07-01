// https://atcoder.jp/contests/abc181/submissions/27067572

#include <bits/stdc++.h>
using namespace std;
int main() {
  unsigned long long n, a, b, ans = 0; cin >> n;
  while(cin >> a >> b) ans += b * (b+1) / 2 - (a-1) * a / 2;
  cout << ans;
}
