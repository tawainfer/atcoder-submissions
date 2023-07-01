// https://atcoder.jp/contests/abc045/submissions/29255356

#include <bits/stdc++.h>
using namespace std;
int main() {
  char next = 'a';
  string a, b, c; cin >> a >> b >> c;
  while(1) {
    if(next == 'a') {
          if(a == "") {
      cout << 'A';
      return 0;
          }
      next = a[0];
      a.erase(0, 1);
    } else if(next == 'b') {
                if(b == "") {
      cout << 'B';
      return 0;
          }
      next = b[0];
      b.erase(0, 1);
    } else if(next == 'c') {
                if(c == "") {
      cout << 'C';
      return 0;
          }
      next = c[0];
      c.erase(0, 1);
    }
  }
}
