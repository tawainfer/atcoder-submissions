// https://atcoder.jp/contests/abc102/submissions/26576772

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  for(int i = n; ans == 0; i++) if(i % 2 == 0 && i % n == 0) ans = i;
  cout << ans;
}
