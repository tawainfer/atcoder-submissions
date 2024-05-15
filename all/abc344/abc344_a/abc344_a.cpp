#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool b = true;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '|') {
      b = !b;
      continue;
    }

    if(b) {
      cout << s[i];
    }
  }
}