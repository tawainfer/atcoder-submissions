// https://atcoder.jp/contests/abc177/submissions/29221069

#include <bits/stdc++.h>
using namespace std;
int main() {
  int cnt, ans = 1e9;
  string s, t; cin >> s >> t;
  for(int i = 0; i < s.size(); i++) {
    if(i + t.size() > s.size()) break;
    cnt = 0;
    for(int j = 0; j < t.size(); j++) {
      if(t[j] != s[i + j]) cnt++;
    }
    ans = min(ans, cnt);
  }
  cout << ans;
}
