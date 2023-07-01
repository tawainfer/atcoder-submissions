// https://atcoder.jp/contests/abc030/submissions/26616825

#include <bits/stdc++.h>
using namespace std;
int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  if(a / b == c / d) cout << "DRAW";
  else if(a / b > c / d) cout << "AOKI";
  else cout << "TAKAHASHI";
  cout << endl;
}
