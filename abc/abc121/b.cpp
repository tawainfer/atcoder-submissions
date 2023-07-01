// https://atcoder.jp/contests/abc121/submissions/29019024

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, c, sum = 0, ans = 0; cin >> n >> m >> c;
  int b[m];
  for(int i = 0; i < m; i++) cin >> b[i];
  int a[m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[j];
      sum += a[j] * b[j];
    }
    sum += c;
    if(sum > 0) ans++;
    sum = 0;
  }
  cout << ans;
}
