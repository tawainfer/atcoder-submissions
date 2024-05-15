#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m = 1110, ans = 0; cin >> n;
  for(int i = 0; i < 9; i++) {
    m -= 111;
    if(m >= n) ans = m;
  }
  cout << ans;
}