#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, g, m;
  cin >> k >> g >> m;

  int cg = 0;
  int cm = 0;
  while(k--) {
    if(cg == g) {
      cg = 0;
    } else if(cm == 0) {
      cm = m;
    } else {
      if(cg + cm > g) {
        cm -= g - cg;
        cg = g;
      } else {
        cg += cm;
        cm = 0;
      }
    }

  // cout << cg << " " << cm << endl;
  }

  cout << cg << " " << cm;
}