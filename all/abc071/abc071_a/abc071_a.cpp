#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, a, b;
  cin >> x >> a >> b;
  a = abs(a - x);
  b = abs(b - x);
  if(a < b) cout << 'A';
  else cout << 'B';
}