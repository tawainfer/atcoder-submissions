// https://atcoder.jp/contests/abc350/submissions/52684137

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = stoi(s.substr(3, 3));
  cout << (0 < n && n < 350 && n != 316 ? "Yes" : "No");
}
