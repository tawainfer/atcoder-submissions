#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, t, ans = "No"; cin >> s >> t;
  int k = 0, l = 0;
  for(int i = 0; i < 26; i++) {
    for(int j = 0; j < s.size(); j++) {
      if(s.at(j) == 'z') s.at(j) -= 25;
      else s.at(j)++;
    }
    if(s == t) ans = "Yes";
  }
  cout << ans;
}