// https://atcoder.jp/contests/abc063/submissions/28662983

#include<bits/stdc++.h>
using namespace std;
int main() {
  string ans = "yes", s; cin >> s;
  for(int i = 0; i < s.size(); i++) for(int j = 0; j < s.size(); j++) if(i != j) if(s[i] == s[j]) ans = "no";
  cout << ans;
}
