// https://atcoder.jp/contests/abc067/submissions/26604940

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if(a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0) cout << "Possible";
  else cout << "Impossible";
}
