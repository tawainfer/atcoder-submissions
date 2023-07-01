// https://atcoder.jp/contests/abc017/submissions/26662834

#include <bits/stdc++.h>
using namespace std;
int main() {
  int s, e, ans = 0;
  for(int i = 0; i < 3; i++) {
    cin >> s >> e;
    ans += s * e / 10;
  }
  cout << ans << endl;
}
