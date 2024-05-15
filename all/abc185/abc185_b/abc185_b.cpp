#include <bits/stdc++.h>
using namespace std;
int main() {
  string ans = "Yes";
  int a, b, n, m, t, last = 0; cin >> n >> m >> t;
  int e = n;
  for(int i = 0; i < m; i++) {
    cin >> a >> b;
    e -= (a - last);
    if(e <= 0) {
      ans = "No";
      e = 0;
    }
    e += (b - a);
    if(e > n) {
      e = n;
    }
    last = b;
  }
    if(last != t) {
        e -= (t - last);
    if(e <= 0) {
      ans = "No";
    }
  }
  cout << ans;
}