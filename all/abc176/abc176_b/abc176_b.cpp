#include <bits/stdc++.h>
using namespace std;
int main() {
  int ans = 0;
  char c;
  while(cin >> c) ans += (int)c - 48;
  if(ans % 9 == 0) cout << "Yes";
  else cout << "No";
}