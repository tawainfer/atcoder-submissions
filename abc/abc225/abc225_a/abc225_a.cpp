#include <bits/stdc++.h>
using namespace std;
int main() {
  char a, b, c; cin >> a >> b >> c;
  if(a == b && b == c) {cout << 1; return 0;}
  if(a == b || a == c || b == c) cout << 3;
  else cout << 6;
}