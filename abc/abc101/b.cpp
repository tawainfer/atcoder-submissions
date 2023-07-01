// https://atcoder.jp/contests/abc101/submissions/28348172

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
  char n;
  string s = "";
  long ans = 0;
  while(cin >> n) {
    ans += (int)n - 48;
    s += n;
  }
  int t = stoi(s);
  if(t % ans == 0) cout << "Yes";
  else cout << "No";
}
