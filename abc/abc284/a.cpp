// https://atcoder.jp/contests/abc284/submissions/37864064

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> s(n);
  for(auto &z : s) cin >> z;
  reverse(s.begin(), s.end());

  for(auto &z : s) {
    cout << z << endl;
  }
}
