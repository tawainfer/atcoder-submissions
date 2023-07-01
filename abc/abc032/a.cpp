// https://atcoder.jp/contests/abc032/submissions/26616686

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, n, ans = 0;
  cin >> a >> b >> n;
  for(int i = n; ans == 0; i++) if(i % a == 0 && i % b == 0) ans = i;
  cout << ans << endl;
}
