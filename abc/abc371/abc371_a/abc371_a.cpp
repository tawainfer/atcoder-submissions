#include <bits/stdc++.h>
using namespace std;

int main() {
  string sab, sac, sbc;
  cin >> sab >> sac >> sbc;

  for(int a = 0; a < 3; a++) {
    for(int b = 0; b < 3; b++) {
      for(int c = 0; c < 3; c++) {
        if(a == b || b == c || c == a) continue;
        if(sab == "<" && a > b) continue;
        if(sac == "<" && a > c) continue;
        if(sbc == "<" && b > c) continue;
        if(sab == ">" && a < b) continue;
        if(sac == ">" && a < c) continue;
        if(sbc == ">" && b < c) continue;
        
        if(a == 1) {
          cout << "A";
        } else if(b == 1) {
          cout << "B";
        } else {
          cout << "C";
        }
        return 0;
      }
    }
  }
}