// https://atcoder.jp/contests/abc219/submissions/25934756

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, t, u;
  cin >> s >> t >> u;
  char T;
  while(cin >> T) {
    if(T == '1') cout << s;
    else if(T == '2') cout << t;
    else cout << u;
  }
}
