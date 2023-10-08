// https://atcoder.jp/contests/abc323/submissions/46280102

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for(int i = 1; i < s.size(); i += 2) {
    if(s[i] == '1') {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}
