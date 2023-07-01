// https://atcoder.jp/contests/arc045/submissions/28850834

#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  string ans;
  while(cin >> c) {
    if(c == 76) ans += "<";
    else if(c == 82) ans += ">";
    else if(c == 65) ans += "A";
  }
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i];
    if(i != ans.size()-1) cout << " ";
  }
  cout << "\n";
}
