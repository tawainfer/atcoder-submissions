// https://atcoder.jp/contests/arc049/submissions/28852046

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  int a, b, c, d; cin >> a >> b >> c >> d;
  for(int i = 0; i <= s.size(); i++) {
    if(i == a || i == c || i == b || i == d) cout << '"';
    if(s.size() != i) cout << s[i];
  }
  cout << "\n";
}
