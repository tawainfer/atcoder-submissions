// https://atcoder.jp/contests/abc303/submissions/42011433

#include <bits/stdc++.h>
using namespace std;

string fix_str(string s) {
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '1') s[i] = 'l';
    if(s[i] == '0') s[i] = 'o';
  }

  return s;
}

int main() {
  int n;
  cin >> n;

  string s, t;
  cin >> s >> t;
  s = fix_str(s);
  t = fix_str(t);

  cout << (s == t ? "Yes" : "No");
  return 0;
}
