#include <bits/stdc++.h>
using namespace std;
int main() {
  int d, n; cin >> d >> n;
  if(d == 0) {
    if(n == 100) cout << 101; 
    else cout << n;
  }
  else if(d == 1) {
    if(n == 100) cout << 10100; 
    else cout << n * 100;
  } else {
    if(n == 100) cout << 1010000;
    else cout << n * 10000;
  }
}