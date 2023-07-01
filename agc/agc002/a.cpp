// https://atcoder.jp/contests/agc002/submissions/29251777

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b; cin >> a >> b;
  if(a == 0 || b == 0 || (a > 0 && b < 0) || (a < 0 && b > 0)) cout << "Zero";
  else if(a > 0 && b > 0) cout << "Positive";
  else {
    if((b - a) % 2 == 0) cout << "Negative";
    else cout << "Positive";
  }
}
