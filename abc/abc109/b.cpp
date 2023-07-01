// https://atcoder.jp/contests/abc109/submissions/29163587

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a; cin >> a;
  string s, t; cin >> s;
  set<string> check;
  check.insert(s);
  while(cin >> t) {
    check.insert(t);
    if(s[s.size()-1] != t[0]) {
      cout << "No";
      return 0;
    }
    s = t;
  }
  if(check.size() == a) cout << "Yes";
  else cout << "No";
}
