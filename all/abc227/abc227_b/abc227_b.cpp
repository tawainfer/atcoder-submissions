#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  int s[n];
  for(int i = 0; i < n; i++) cin >> s[i];
  
  for(int a = 1; a < 800; a++) {
    for(int b = 1; b < 800; b++) {
      for(int i = 0; i < n; i++) {
        if(4*a*b + 3*a + 3*b == s[i]) s[i] = 0;
      }
    }
  } 
  for(int i = 0; i < n; i++) if(s[i] != 0) ans++;
  cout << ans;
}