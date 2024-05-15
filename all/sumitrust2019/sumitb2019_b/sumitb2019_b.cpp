#include <bits/stdc++.h>
using namespace std;
int main() {
  int ans = 0;
  double n; cin >> n;
  for(int i = 0; i < 50000; i++) {
    if(floor(i * 1.08) == n) ans = i;
  }
  if(ans == 0) cout << ":(";
  else cout << ans;
}