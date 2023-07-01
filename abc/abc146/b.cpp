// https://atcoder.jp/contests/abc146/submissions/27582256

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  char c;
  while(cin >> c) {
    if(c + n > 90) cout << (char)(c + n - 26);
    else cout << (char)(c + n);
  }
}
