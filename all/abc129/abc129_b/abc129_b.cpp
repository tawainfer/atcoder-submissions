#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 100000, s1 = 0, s2 = 0; cin >> n;
  int w[n];
  for(int i = 0; i < n; i++) cin >> w[i];
  for(int t = 1; t < n; t++) {
    for(int i = 0; i < n; i++) {
      if(i > t) s2 += w[i];
      else s1 += w[i];
    }
    if(ans > abs(s1 - s2)) ans = abs(s1 - s2);
    s1 = 0;
    s2 = 0;
  }
  cout << ans;
}