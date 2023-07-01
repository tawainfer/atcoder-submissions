// https://atcoder.jp/contests/abc283/submissions/37512837

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int a, b, ans = 1;
  cin >> a >> b;
  while(b--) ans *= a;

  cout << ans;
}
