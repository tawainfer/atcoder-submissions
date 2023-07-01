// https://atcoder.jp/contests/abc106/submissions/28348010

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cnt = 0, ans = 0; cin >> n;
  for(int i = 105; i <= n; i += 2) {
    for(int k = 1; k <= n; k++) {
      if(i % k == 0) cnt++;
    }
    if(cnt == 8) ans++;
    cnt = 0;
  }
  cout << ans;
}
