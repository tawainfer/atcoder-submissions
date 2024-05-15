#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, x, y, ans = 0;
  cin >> n >> k >> x >> y;
  for(int i = 1; i < n + 1; i++) {
    if(i > k) ans += y;
    else ans += x;
  }
  cout << ans;
}