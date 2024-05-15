#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> s(n), t(m);
  for (int i = 0; i < n; i++) cin >> s[i];
  for (int i = 0; i < m; i++) cin >> t[i];

  int ans = 0;
  for (int i = 0; i < n; i++) {
    bool match = false;
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < 3; k++) {
        if (s[i][k + 3] != t[j][k]) break;
        if (k == 2) match = true;
      }
    }

    if (match) ans++;
  }

  cout << ans;
  return 0;
}