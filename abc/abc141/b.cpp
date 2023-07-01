// https://atcoder.jp/contests/abc141/submissions/27582237

#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  string ans = "Yes";
  int i = 1;
  while(cin >> c) {
    if(i % 2 == 1) {
      if(c == 'L') ans = "No";
    } else {
      if(c == 'R') ans = "No";
    }
    i++;
  }
  cout << ans;
}
