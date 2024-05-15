#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> s(n);
  for(string &z : s) cin >> z;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) continue;
      string t = s[i] + s[j];
      string u = t;
      reverse(u.begin(), u.end());
      if(u == t) {
        cout << "Yes";
        return 0;
      }
    }
  }

  cout << "No";
  return 0;
}