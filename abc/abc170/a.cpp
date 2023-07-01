// https://atcoder.jp/contests/abc170/submissions/26108916

#include <bits/stdc++.h>
using namespace std;
int main() {
  int X, ans = 0;
  for(int i = 0; i < 5; i++) {
    cin >> X;
    if(X == 0) ans = i;
  }
  cout << ans+1;
}
