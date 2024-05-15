#include <bits/stdc++.h>
using namespace std;
int main() {
  int cnt = 0;
  string s; cin >> s;
  string t = "";
  for(int i = 0; i < s.size(); i++) if(s[i] != 'A') t += s[i];
  if(t == "KIHBR") {
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'A') cnt++;
      if(s[i] == 'K') {
        if(cnt > 1) {cout << "NO"; return 0;}
        cnt = 0;
      } else if(s[i] == 'I') {
        if(cnt > 0) {cout << "NO"; return 0;}
        cnt = 0;
      } else if(s[i] == 'H') {
        if(cnt > 0) {cout << "NO"; return 0;}
        cnt = 0;
      } else if(s[i] == 'B') {
        if(cnt > 1) {cout << "NO"; return 0;}
        cnt = 0;
      } else if(s[i] == 'R') {
        if(cnt > 1) {cout << "NO"; return 0;}
        cnt = 0;
      }
    }
  } else {cout << "NO"; return 0;}
  if(cnt > 1) cout << "NO";
  else cout << "YES";
}