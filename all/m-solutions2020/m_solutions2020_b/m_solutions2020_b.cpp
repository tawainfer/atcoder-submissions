#include <bits/stdc++.h>
using namespace std;
int main() {
  string ans = "No";
  int a, b, c, k; cin >> a >> b >> c >> k;
  for(int i = 0; i < k; i++) {
    if(a >= b) b *= 2;
    else if(b >= c) c *= 2;
    if(a < b && b < c) ans = "Yes";
  }
      cout << ans;
}