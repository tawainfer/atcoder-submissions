// https://atcoder.jp/contests/abc031/submissions/26616731

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if(a < b) a++;
  else b++;
  cout << a * b;
  cout << endl;
}
