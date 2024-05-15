#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  vector<int> x(6);
  
  while(cin >> c) x[c-65]++;
  for(int i = 0; i < 6; i++) {
    cout << x[i];
    if(i != 5) cout << " ";
    else cout << endl;
  }
}