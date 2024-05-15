#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  for(auto &z : s) cin >> z;

  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      vector<bool> b(m, false);
      for(int k = 0; k < m; k++) {
        if(s[i][k] == 'o' || s[j][k] == 'o') {
          b[k] = true;
        } else {
          break;
        }

        if(k == m - 1) ans++;
      }
      
    }
  }

  cout << ans;
} 