// https://atcoder.jp/contests/abc229/submissions/27518501

#include <bits/stdc++.h>
using namespace std; 
int main() {
  char s[4];
  int count = 0;
  for(int i = 0; i < 4; i++) {
    cin >> s[i];
    if(s[i] == '#') count++;
  }
  if(count == 2 && ((s[0] == '#' && s[3] == '#') || (s[1] == '#' && s[2] == '#'))) cout << "No";
  else cout << "Yes";
}
