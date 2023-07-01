// https://atcoder.jp/contests/abc296/submissions/40211292

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  string s;
  cin >> s;

  bool fm = true;
  if(s[0] == 'F') fm = false;
  for(int i = 0; i < n; i++) {
    if(fm) {
      if(i % 2 == 0) {
        if(s[i] == 'F') {
          cout << "No";
          return 0;
        }
      } else {
        if(s[i] == 'M') {
          cout << "No";
          return 0;
        }
      }
    } else {

      if(i % 2 == 0) {
        if(s[i] == 'M') {
          cout << "No";
          return 0;
        }
      } else {
        if(s[i] == 'F') {
          cout << "No";
          return 0;
        }
      }
    }
  }

  cout << "Yes";
}
