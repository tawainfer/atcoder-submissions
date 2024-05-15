#include <bits/stdc++.h> 
using namespace std; 
int main() {
  int a, b; cin >> a >> b;
  int n = a + b;
  if(n % 12 == 0) cout << 12;
  else cout << n % 12;
}