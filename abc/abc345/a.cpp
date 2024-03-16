// https://atcoder.jp/contests/abc345/submissions/51362056

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  regex pattern("^<=+>$");
  cout << (regex_search(s, pattern) ? "Yes" : "No");
}
