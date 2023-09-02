// https://atcoder.jp/contests/abc318/submissions/45130462

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, p;
  cin >> n >> m >> p;

  int ans = 0;
  int t = m;
  while(t <= n) {
    ans++;
    t += p;
  }

  cout << ans;
  return 0;
}
