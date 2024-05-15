#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  string s[n];
  int t[n];
  string x;
  for(int i = 0; i < n; i++) cin >> s[i] >> t[i];
  cin >> x;
  
  int sleep;
  for(int i = 0; i < n; i++) if(s[i] == x) sleep = i + 1;
  for(int i = sleep; i < n; i++) ans += t[i];
  cout << ans;
}