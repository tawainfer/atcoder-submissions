#include <bits/stdc++.h> 
using namespace std; 
int main() {
  double x; cin >> x;
  double y = (int)x;
  x -= y;
  if(x >= 0.5) cout << y + 1;
  else cout << y;
}