#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, k; cin >> a >> b >> c >> k;
  int d = max({a, b, c});
  while(k--) d *= 2;
  cout << a + b + c - max({a, b, c}) + d;
}