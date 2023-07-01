// https://atcoder.jp/contests/abc277/submissions/36416344

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  set<string> se;
  string s;
  while(cin >> s) {
    se.insert(s);

    if(!(s[0] == 'H' || s[0] == 'D' || s[0] == 'C' || s[0] == 'S')) {
      cout << "No";
      return 0;
    }

    if(!(s[1] == 'A' || s[1] == 'T' || s[1] == 'J' || s[1] == 'Q' || s[1] == 'K')) {
      if(!(s[1] == '2' || s[1] == '3' || s[1] == '4' || s[1] == '5' || s[1] == '6' || s[1] == '7' || s[1] == '8' || s[1] == '9')) {
        cout << "No";
        return 0;
      }
    }
  }
  // for(auto &z : se) cout << z << " ";
  if(n == (int)se.size()) cout << "Yes";
  else cout << "No";
}
