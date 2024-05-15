#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b, x, y; cin >> n >> a >> b;
  x = a;
  y = b;
  while(cin >> a >> b) {
    if(x != a && x != b) x = -1;
    if(y != a && y != b) y = -1;
  }
  if(x == -1 && y == -1) cout << "No";
  else cout << "Yes";
}