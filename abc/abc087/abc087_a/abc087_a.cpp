#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, a, b;
  cin >> x >> a >> b;
  x -= a;
  while(x >= b) x -= b;
  cout << x;
}