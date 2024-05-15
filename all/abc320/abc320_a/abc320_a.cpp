#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  int ans = 0;
  int base = 1;
  for(int i = 0; i < b; i++) base *= a;
  ans += base;
  
  base = 1;
  for(int i = 0; i < a; i++) base *= b;
  ans += base;

  cout << ans;
  return 0;
}