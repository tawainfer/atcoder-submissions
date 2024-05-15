#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  while(cin >> c) {
    if(c == 'O') cout << 0;
    else if(c == 'D') cout << 0;
    else if(c == 'I') cout << 1;
    else if(c == 'Z') cout << 2;
    else if(c == 'S') cout << 5;
    else if(c == 'B') cout << 8;
    else cout << c;
  }
  cout << "\n";
}