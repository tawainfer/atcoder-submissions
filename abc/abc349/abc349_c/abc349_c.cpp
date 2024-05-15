#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  for(int i = 0; i < t.size(); i++) {
    t[i] = (char)(t[i] + 32);
  }

  int cp = 0;
  for(int i = 0; i < s.size(); i++) {
    if(cp == 3) break;
    if(s[i] == t[cp]) {
      cp++;
    }
  }

  if(cp == 3 || (cp == 2 && t.back() == 'x')) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}