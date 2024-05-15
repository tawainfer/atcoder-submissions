#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, ans = "No"; cin >> s;
  int n = s.size();
  string t = s, u = s;
  reverse(t.begin(), t.end());
  if(s == t) {
    s = s.substr(0, (n - 1) / 2);
    t = s;
    reverse(t.begin(), t.end());
    if(s == t) {
      s = u.substr(((n + 3) / 2) - 1, n);
      t = s;
      reverse(t.begin(), t.end());
      if(s == t) {
        ans = "Yes";
      }
    }
  }
  cout << ans;
}