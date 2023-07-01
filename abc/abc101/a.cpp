// https://atcoder.jp/contests/abc101/submissions/26578140

#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  int ans = 0;
  while(cin >> c) {
    if(c == '+') ans++;
    else ans--;
  }
  cout << ans;
}
