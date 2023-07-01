// https://atcoder.jp/contests/agc026/submissions/29019388

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, color = 0, cnt = 0, ans = 0; cin >> n;
  cin >> n;
  color = n;
  cnt++;
  while(cin >> n) {
    if(color == n) cnt++;
    else {
      color = n;
      ans += cnt / 2;
      cnt = 1;
    }
  }
  if(cnt != 1) ans += cnt / 2;
  cout << ans;
}
