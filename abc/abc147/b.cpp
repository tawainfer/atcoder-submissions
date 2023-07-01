// https://atcoder.jp/contests/abc147/submissions/27282861

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int n = s.length();
  int ans = 0;
  for(int i = 0; i < n / 2; i++) if(s[i] != s[n - 1 - i]) ans++;
  cout << ans;
}
