// https://atcoder.jp/contests/abc122/submissions/28265840

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  int n = s.size();
  int cnt = 0, maxcnt = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
      cnt++;
    } else {
      if(maxcnt < cnt) {
        maxcnt = cnt;
      }
      cnt = 0;
    }
  }
        if(maxcnt < cnt) {
        maxcnt = cnt;
      }
  cout << maxcnt;
}
