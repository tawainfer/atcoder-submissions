// https://atcoder.jp/contests/abc167/submissions/26199148

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, t;
  cin >> s >> t;
  if(equal(begin(s), end(s), begin(t))) cout << "Yes";
  else cout << "No";
}
