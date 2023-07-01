// https://atcoder.jp/contests/abc104/submissions/29157389

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  if(s[0] != 'A') {
    cout << "WA";
    return 0;
  }
  int cnt = 0;
  for(int i = 0; i < s.size(); i++) {
    if(0 > s[i] - 'a' && s[i] != 'A' && s[i] != 'C') {
      cout << "WA";
      return 0;
    }
    if(i > 1 && i < s.size()-1) if(s[i] == 'C') cnt++;
    if(cnt > 1) {
      cout << "WA";
      return 0;
    }
  }
  if(cnt == 1) cout << "AC";
  else cout << "WA";
}
