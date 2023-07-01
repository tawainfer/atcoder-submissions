// https://atcoder.jp/contests/abc192/submissions/26988557

#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  string ans = "Yes";
  for(int i = 0; cin >> c; i++) {
    if(i % 2 == 0) {
      if(c < 97) ans = "No";
    } else {
      if(c > 96) ans = "No";
    }
  }
  cout << ans;
}
