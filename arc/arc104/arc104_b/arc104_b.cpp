#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<int> at = {0}, cg = {0};
  for(int i = 0; i < n; i++) {
    int x = 1;
    if(s[i] == 'T') x = -1;
    int y = 1;
    if(s[i] == 'G') y = -1;

    if(s[i] == 'A' || s[i] == 'T') at.push_back(at.back() + x);
    else at.push_back(at.back());
    if(s[i] == 'C' || s[i] == 'G') cg.push_back(cg.back() + y);
    else cg.push_back(cg.back());
  }

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = i + 1; j <= n; j++) {
      if((at[j] - at[i - 1]) == 0 && (cg[j] - cg[i - 1]) == 0) {
        ans++;
      }
    }
  }

  cout << ans;
  return 0;
}