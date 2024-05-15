#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, ans = "Yes"; cin >> s;
  int check = 0;
  if(s.size() == 2) {
    if(s == "oo") ans = "No";
  } else if(s.size() != 1) {
    if(s[1] == 'o') check++;
    else if(s[2] == 'o') check += 2;
    for(int i = 0; i < s.size(); i++) {
      if(i % 3 == check) {
        if(s[i] != 'o') ans = "No";
      } else if(s[i] != 'x') {
        ans = "No";
      }
    }
  }
  cout << ans;
}