// https://atcoder.jp/contests/abc056/submissions/28302376

#include <bits/stdc++.h>
using namespace std;
int main() {
  int w, a, b;
  cin >> w >> a >> b;
  if(abs(b-a) <= w) cout << 0;
  else cout << abs(b-a) - w;
}
