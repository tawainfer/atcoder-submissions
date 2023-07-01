// https://atcoder.jp/contests/abc051/submissions/26604965

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  for(int i = 0; i < 19; i++) {
    if(s[i] == ',') cout << ' ';
    else cout << s[i];
  }
}
