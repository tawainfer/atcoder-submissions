// https://atcoder.jp/contests/abc086/submissions/28348498

#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  string s = "", ans = "No";
  while(cin >> c) s += c;
  int n = stoi(s);
  if(pow(ceil(sqrt(n)), 2) == n) ans = "Yes";
  cout << ans;
}
