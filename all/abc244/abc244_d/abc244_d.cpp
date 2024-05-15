#include <bits/stdc++.h>
using namespace std;

int main() {
  char s[3], t[3];
  cin >> s[0] >> s[1] >> s[2] >> t[0] >> t[1] >> t[2];
  
  if(s[0] == t[0] && s[1] == t[1] && s[2] == t[2]) cout << "Yes";
  else if(s[0] != t[0] && s[1] != t[1] && s[2] != t[2]) cout << "Yes";
  else cout << "No";
}