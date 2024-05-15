#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x; cin >> n >> x;
  char c;
  while(cin >> c) {
    if(c == 'x') {if(x > 0) x--;} 
    else x++;
  }
  cout << x;
}