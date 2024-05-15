#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<int> next_pos[26];
  for(int i = 0; i < n; i++) next_pos[(int)s[i] - 97].push_back(i);

  int pos = 0;
  string ans = "";

  while(ans.size() < k) {
    for(int i = 0; i < 26; i++) {
      auto iter = lower_bound(next_pos[i].begin(), next_pos[i].end(), pos);
      if(iter == next_pos[i].end()) continue;

      int d = *iter;
      if((k - ans.size()) <= (n - d)) {
        ans += (char)(i + 97);
        pos = d + 1;
        break;
      }
    }
  }

  cout << ans;
  return 0;
}