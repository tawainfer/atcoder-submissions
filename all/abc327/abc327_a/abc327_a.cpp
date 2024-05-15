#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  for(int i = 1; i < n; i++) {
    if(s[i - 1] == 'a' && s[i] == 'b' || s[i - 1] == 'b' && s[i] == 'a') {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}