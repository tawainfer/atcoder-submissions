// https://atcoder.jp/contests/abc188/submissions/25809236

#include <bits/stdc++.h>
using namespace std;
int main() {
  int X, Y;
  cin >> X >> Y;
  if(X < Y && X + 3 > Y) cout << "Yes";
  else if(X > Y && X < Y + 3) cout << "Yes";
  else cout << "No";
}
