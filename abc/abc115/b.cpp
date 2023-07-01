// https://atcoder.jp/contests/abc115/submissions/28337995

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  int p[n];
  for(int i = 0; i < n; i++) cin >> p[i];
  sort(p, p + n);
  for(int i = 0; i < n; i++) {
    if(n-1 == i) ans += p[i] / 2;
    else ans += p[i];
  }
  cout << ans;
}
