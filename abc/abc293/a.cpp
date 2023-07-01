// https://atcoder.jp/contests/abc293/submissions/39601891

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for(int i = 0; i <= s.size() / 2; i++) {
    swap(s[2 * i - 2], s[2 * i - 1]);
  }

  cout << s;
}
