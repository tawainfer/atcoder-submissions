#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  string s; cin >> s;
  int ans = 114514, cnt = 0;
  
  for(int i = 0; i < s.size(); i++) {
    if(i % 2 == 0) {
      if(s[i] == '0') cnt++;
    } else {
      if(s[i] == '1') cnt++;
    }
  }
  ans = min(ans, cnt);
  cnt = 0;
  
  for(int i = 0; i < s.size(); i++) {
    if(i % 2 == 0) {
      if(s[i] == '1') cnt++;
    } else {
      if(s[i] == '0') cnt++;
    }
  }
  ans = min(ans, cnt);
  cout << ans;
}