#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  for(int i = 0; i < 12; i++) {
    cin >> c;
    if(i == 4) cout << ' ' << c;
    else cout << c;
  }
  cout << endl;
}