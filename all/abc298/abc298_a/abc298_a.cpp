#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  bool check = false;

  for(int i = 0; i < n; i++) {
    if(s[i] == 'x') {
      cout << "No";
      return 0;
    }

    if(s[i] == 'o') check = true;
  }

  if(check) cout << "Yes";
  else cout << "No";
}