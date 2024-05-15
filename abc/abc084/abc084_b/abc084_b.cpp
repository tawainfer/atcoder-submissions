#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b; cin >> a >> b;
  char c;
  for(int i = 0; i < a; i++) {
    cin >> c;
    if(c > 47 && 58 > c) {
      
    } else {
      cout << "No";
      return 0;
    }
  }
  cin >> c;
  if(c != '-') {
    cout << "No";
    return 0;
  }
  for(int i = 0; i < b; i++) {
    cin >> c;
    if(c > 47 && 58 > c) {
      
    } else {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}