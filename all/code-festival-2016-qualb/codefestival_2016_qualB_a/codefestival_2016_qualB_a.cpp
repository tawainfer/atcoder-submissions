#include <bits/stdc++.h>
using namespace std;
int main() {
  int ans = 0;
  string s, t = "CODEFESTIVAL2016";
  cin >> s;
  for(int i = 0; i < 16; i++) {
    if(s[i] != t[i]) ans++;
  }
  cout << ans;
}