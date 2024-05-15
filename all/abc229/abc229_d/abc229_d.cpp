#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  int n = s.size();

  if(k == 0) {
    int ans = 0;
    int cnt = 0;
    for(auto &z : s) {
      if(z == 'X') cnt++;
      else cnt = 0;
      ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
  }

  int i = 0;
  int j = -1;
  int x = 0;
  int p = 0;

  int ans = 0;
  while(!(i == n - 1 && j == n - 1)) {
    if((j != n - 1 && p <= k) || i == j) {
      j++;
      (s[j] == 'X' ? x++ : p++);
      if(p > k && s[j] == '.') continue;
    } else {
      (s[i] == 'X' ? x-- : p--);
      i++;
    }

    ans = max(ans, j - i + 1);
    // cout << i << " " << j << " " << s.substr(i, j - i + 1) << endl;
  }

  cout << ans;
  return 0;
}