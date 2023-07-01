// https://atcoder.jp/contests/abc286/submissions/38194360

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  for(int i = 0; i < n; i++) {
    if((p - 1) <= i && i <= (q - 1)) cout << a[(r - 1) + (i - (p - 1))];
    else if((r - 1) <= i && i <= (s - 1)) cout << a[(p - 1) + (i - (r - 1))];
    else cout << a[i];
    cout << " ";
  }
}
