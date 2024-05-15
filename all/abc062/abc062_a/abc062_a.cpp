#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  string ans = "No";
  if(a == 2 && b == 2) ans == "Yes";
  else if((a == 4 || a == 6 || a == 9 || a == 11) && (b == 4 || b == 6 || b == 9 || b == 11)) ans = "Yes";
  else if((a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) && (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)) ans = "Yes";
  cout << ans;
}