// https://atcoder.jp/contests/abc118/submissions/26375912

#include<bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if(b % a == 0) cout << a + b;
  else cout << b - a;
}
