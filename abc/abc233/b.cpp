// https://atcoder.jp/contests/abc233/submissions/28131443

#include <bits/stdc++.h>
using namespace std;
int main() {
  int l, r, cnt = 0; cin >> l >> r;
  string s; cin >> s;
  string t = s.substr(l-1, r-l+1);
  reverse(t.begin(), t.end());
  s.erase(l-1, r-l+1);
  s.insert(l-1, t);
  cout << s;
}
