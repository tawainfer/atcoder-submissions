#include <bits/stdc++.h>
using namespace std;
int main() {
  int count = 0;
  char n;
  while(cin >> n) if(n == '7') count++;
  if(count != 0) cout << "Yes";
  else cout << "No";
}