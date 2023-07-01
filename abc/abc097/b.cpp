// https://atcoder.jp/contests/abc097/submissions/29162671

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, ans = 0; cin >> x;
  if(x == 1) {
    cout << 1;
    return 0;
  }
  for(int b = 2; b <= x; b++) for(int p = 2; pow(b, p) <= x; p++) if(ans < pow(b, p)) ans = pow(b, p);
  cout << ans;
}
