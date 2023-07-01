// https://atcoder.jp/contests/abc010/submissions/28838470

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  while(cin >> n) {
    if(n != 5 && n % 2 == 1) ans += 0;
    else if(n == 2 || n == 4 || n == 8) ans++;
    else if(n == 5) ans += 2;
    else ans += 3;
  }
  cout << ans << "\n";
}
