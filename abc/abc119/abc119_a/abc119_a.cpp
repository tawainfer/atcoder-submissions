#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, ans = "Heisei";
  cin >> s;
  if(s[5] == '1' || (s[6] != '1' && s[6] != '2' && s[6] != '3' && s[6] != '4')) ans = "TBD";
  cout << ans;
}