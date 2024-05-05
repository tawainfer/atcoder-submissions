// https://atcoder.jp/contests/abc352/submissions/53084968

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int i = 0;
  for(int j = 0; j < t.size(); j++) {
    if(s[i] == t[j]) {
      cout << j + 1 << " ";
      i++;
    }
  }
}
