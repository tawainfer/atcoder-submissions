// https://atcoder.jp/contests/abc136/submissions/26250369

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  while(a > b && c != 0) {
    b++;
    c--;
  }
  cout << c;
}
