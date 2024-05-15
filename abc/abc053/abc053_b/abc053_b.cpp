#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  int a = 0, z = s.size() - 1;
  for(; a < s.size(); a++) if(s[a] == 'A') break;
  for(; z >= 0; z--) if(s[z] == 'Z') break;
  cout << z - a + 1;
}