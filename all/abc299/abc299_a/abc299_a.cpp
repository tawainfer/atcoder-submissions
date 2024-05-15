#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  bool b = false;
  for(int i = 0; i < n; i++) {
    if(s[i] == '|') b = !b;
    if(s[i] == '*') {
      if(b) cout << "in";
      else cout << "out";
    }
  }
}