// https://atcoder.jp/contests/abc066/submissions/29325946

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, a, b; cin >> s;
  int ans = 0;
  for(int i = 2; i < s.size() - 1; i++) if(i % 2 == 0) {
    a = s.substr(0, i / 2);
    b = s.substr(i / 2, i / 2);
    if(a == b) ans = max(ans, i);
  }
  cout << ans;
}
