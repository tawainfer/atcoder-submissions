#include <bits/stdc++.h>
using namespace std;
int main() {
  int ans = 0, n;
  char c;
  for(int i = 0; cin >> c; i++) {
    n = (int)c - 48;
    if(i % 2 == 0) ans += n;
    else ans -= n;
  }
  cout << ans;
}