// https://atcoder.jp/contests/abc234/submissions/28507867

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n; cin >> n;
  string s = "";
  if(n == 0) {
    cout << 0;
    return 0;
  } else if(n == 1) {
    cout << 2;
    return 0;
  }
  while(n >= 2) {
    if(n % 2 == 0) s += "0";
    else s += "2";
    n /= 2;
  }
  if(n == 0) s += "0";
  else s += "2";
  reverse(s.begin(), s.end());
  cout << s;
}
