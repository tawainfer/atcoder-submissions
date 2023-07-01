// https://atcoder.jp/contests/abc123/submissions/29024457

#include <bits/stdc++.h>
using namespace std;
int main() {
  int F[5], f[5], sum = 0; cin >> F[0] >> F[1] >> F[2] >> F[3] >> F[4];
  for(int i = 0; i < 5; i++) {
    f[i] = F[i];
    if(f[i] > 99) f[i] %= 100;
    if(f[i] > 9) f[i] %= 10;
    if(f[i] == 0) {
      f[i] = 10;
      sum += F[i];
    } else sum += F[i] - f[i] + 10;
  }
  sort(f, f + 5);
  if(f[0] == 10 && f[4] == 10) cout << sum;
  else cout << sum - 10 + f[0];
}
