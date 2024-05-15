#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int x, y, k; cin >> x >> y >> k;
  while(y > 0 && k > 0) {x++; y--; k--;}
  if(k < 1) cout << x << "\n";
  else {while(k > 0) {x--; y++; k--;} cout << x << "\n";}
}