#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  char c;
  cin >> n >> c;
  
  char t;
  int b = 0;
  int r = 0;

  while(cin >> t) {
    if(t == 'B') b++;
    if(t == 'R') r++;
  }
  
  while(b + r >= 2) {
    if(b == 0) {
      r -= 2;
      b++;
    } else if(r == 0) {
      b -= 2;
      r++;
    } else {
      b--;
      r--;
    }
  }
  
  if(c == 'B') {
    if(b != 0) cout << "Yes";
    else cout << "No";
  }
  
  if(c == 'R') {
    if(r != 0) cout << "Yes";
    else cout << "No";
  }
  
  if(c == 'W') {
    if(b == 0 && r == 0) cout << "Yes";
    else cout << "No";
  }
}