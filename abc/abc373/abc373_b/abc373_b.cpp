#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int cp;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'A') {
      cp = i;
      break;
    }
  }
  
  int ans = 0;
  for(char c = 'A'; c <= 'Z'; c++) {
    for(int i = 0; i <= 26; i++) {
      for(int j = -1; j <= 1; j += 2) {
        int k = cp + i * j;
        if(!(0 <= k && k < s.size())) continue;
        if(s[k] != c) continue;
        ans += i;
      }
    }

    for(int i = 0; i < s.size(); i++) {
      if(s[i] == c) {
        cp = i;
        break;
      }
    }
  }

  cout << ans;
}