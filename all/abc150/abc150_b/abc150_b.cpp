#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0, cnt = 0; cin >> n;
  string s; cin >> s;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'A') cnt = 1;
    else if(cnt == 1 && s[i] == 'B') cnt++;
    else if(cnt == 2 && s[i] == 'C') cnt++;
    else cnt = 0;
    if(cnt == 3) {
      ans++;
      cnt = 0;
    }
  }
  cout << ans;
}