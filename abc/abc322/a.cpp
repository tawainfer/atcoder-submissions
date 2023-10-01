// https://atcoder.jp/contests/abc322/submissions/46058064

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  for(int i = 2; i < s.size(); i++) {
    if(s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'C') {
      cout << i + 1 - 2;
      return 0;
    }
  }

  cout << -1;
  return 0;
}
