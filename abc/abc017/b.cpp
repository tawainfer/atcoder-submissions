// https://atcoder.jp/contests/abc017/submissions/29382499

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  string s; cin >> s;
  
  if(s == "") {cout << "Yes\n"; return 0;}
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'o' || s[i] == 'k' || s[i] == 'u') continue;
    else if(s[i] == 'c') {
      if(s[i+1] == 'h') {i++; continue;}
      else {cout << "NO\n"; return 0;}
    }
    else {cout << "NO\n"; return 0;}
  }
  cout << "YES\n";
}
