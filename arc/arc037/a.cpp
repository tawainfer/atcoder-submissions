// https://atcoder.jp/contests/arc037/submissions/28655324

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  while(cin >> n) if(n < 80) ans += 80 - n;
  cout << ans << "\n";
}

