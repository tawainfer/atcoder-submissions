#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if(!('A' <= s[0] && s[0] <= 'Z')) {
    cout << "No";
    return 0;
  }

  for(int i = 1; i < s.size(); i++) {
    if(!('a' <= s[i] && s[i] <= 'z')) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}