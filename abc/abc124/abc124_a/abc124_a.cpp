#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, ans = 0;
  cin >> a >> b;
  for(int i = 0; i < 2; i++) {
    if(a > b) {
      ans += a;
      a--;
    } else {
      ans += b;
      b--;
    }
  }
    cout << ans;
}