#include <bits/stdc++.h>
using namespace std;
int main() {
  string ans = "Strong";
  char x[4];
  int count = 0;
  for(int i = 0; i < 4; i++) cin >> x[i];
  if(x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) ans = "Weak";
  else {
    for(int i = 0; i < 3; i++) {
      if(x[i] == '9') {
        if(x[i+1] == '0') count++;
      } else {
        if((int)x[i] == (int)x[i+1] - 1) count++;
      } 
    }
  }
  if(count == 3) ans = "Weak";
  cout << ans;
}