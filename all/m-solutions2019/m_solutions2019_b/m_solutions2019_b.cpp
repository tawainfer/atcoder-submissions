#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  int k = 0, win = 0;
  while(cin >> c) {
    if(c == 'o') win++;
    k++;
  }
  if(15 - k + win > 7) cout << "YES";
  else cout << "NO";
}