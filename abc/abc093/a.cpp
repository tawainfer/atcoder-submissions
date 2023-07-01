// https://atcoder.jp/contests/abc093/submissions/26576971

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if(s == "abc") cout << "Yes";
  else cout << "No";
}
