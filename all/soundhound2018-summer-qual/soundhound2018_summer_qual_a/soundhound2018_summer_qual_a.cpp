#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  char ans = 'x';
  if(a + b == 15) ans = '+';
  else if(a * b == 15) ans = '*';
  cout << ans;
}