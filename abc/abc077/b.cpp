// https://atcoder.jp/contests/abc077/submissions/28265183

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  for(int i = 1; i <= 100000000; i++) if(pow(i, 2) <= n) ans = pow(i, 2);
  cout << ans;
}
