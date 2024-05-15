#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  for(int i = 0; i < s.size(); i++) {
    for(int j = i; j < s.size(); j++) {
      string t = s.substr(i, j - i + 1);
      string u = t;
      reverse(u.begin(), u.end());
      if(t == u) ans = max(ans, (int)t.size());
    }
  }

  cout << ans;
  return 0;
}