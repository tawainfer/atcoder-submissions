// https://atcoder.jp/contests/abc167/submissions/27583319

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, k, ans = 0; cin >> a >> b >> c >> k;
  for(int i = 0; i < k; i++) {
    if(i < a) ans++;
    else if(i < a + b) ans += 0;
    else ans--;
  }
  cout << ans;
}
