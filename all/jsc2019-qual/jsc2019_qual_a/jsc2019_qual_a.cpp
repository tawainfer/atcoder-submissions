#include <bits/stdc++.h>
using namespace std;
int main() {
  int m, d, ans = 0; cin >> m >> d;
  for(int i = 1; i <= m; i++) {
    for(int k = 22; k <= d; k++) {
      if(k % 10 >= 2) {
        if(i == (k % 10) * (k / 10)) ans++;
      }
    }
  }
  cout << ans;
}