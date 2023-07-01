// https://atcoder.jp/contests/abc228/submissions/27365338

#include <bits/stdc++.h>
using namespace std;
int main() {
  string ans = "No";
  int s, t, x; cin >> s >> t >> x;
  if(s < t) {
    if(s <= x && x < t) ans = "Yes";
  } else {
    if(x >= s) ans = "Yes";
    if(x < t) ans = "Yes";
  }
    cout << ans;
}
