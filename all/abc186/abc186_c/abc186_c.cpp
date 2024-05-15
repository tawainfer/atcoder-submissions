#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, flag = 0, ans = 0; cin >> n;
  for(int h = 1; h <= n; h++) {
    string s = to_string(h);
    for(int i = 0; i < s.size(); i++) if(s[i] == '7') flag++;
    int m = h;
    while(m >= 8) {
      if(m % 8 == 7) flag++;
      m /= 8;
    }
    if(m % 8 == 7) flag++;
    if(flag == 0) ans++;
    flag = 0;
  }
  cout << ans;
}