// https://atcoder.jp/contests/abc098/submissions/29251283

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cnt = 0, ans = 0; cin >> n;
  string x, y, s; cin >> s;
  vector<bool> judgex(26, false),  judgey(26, false);
  for(int i = 1; i <= s.size()-1; i++) {
    x = s.substr(0, i);
    y = s.substr(i);
    for(int k = 0; k < x.size(); k++) judgex[x[k] - 97] = true;
    for(int k = 0; k < y.size(); k++) judgey[y[k] - 97] = true;
    for(int k = 0; k < 26; k++) if(judgex[k] && judgey[k]) cnt++;
    ans = max(ans, cnt);
    cnt = 0;
    for(int k = 0; k < 26; k++) {judgex[k] = false; judgey[k] = false;}
  }
  cout << ans;
}
