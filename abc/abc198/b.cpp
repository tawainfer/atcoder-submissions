// https://atcoder.jp/contests/abc198/submissions/27305016

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, ans = "No"; cin >> s;
  if(s == "0") ans = "Yes";
  for(int i = s.size()-1; i > 0; i--) {
    if(s[i] == '0') s.erase(i, 1);
    else break;
  }
  string t = s;
  reverse(t.begin(), t.end());
  if(s == t) ans = "Yes";
    cout << ans;
}
