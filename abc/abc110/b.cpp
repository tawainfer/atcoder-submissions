// https://atcoder.jp/contests/abc110/submissions/29001992

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, x, y; cin >> n >> m >> x >> y;
  int a[n], b[m];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  sort(a, a + n);
  reverse(a, a + n);
  sort(b, b + m);
  for(int z = x + 1; z <= y; z++) {
    if((a[0] < z) && (b[0] >= z)) {
      cout << "No War";
      return 0;
    }
  }
  cout << "War";
}
