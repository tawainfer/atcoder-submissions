#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  set<int> s[m];
  for(int i = 0; i < m; i++) {
    int c;
    cin >> c;

    int x;
    while(c--) {
      cin >> x;
      s[i].insert(x);
    }
  }

  int ans = 0;
  for(int bit = 0; bit < (1 << m); bit++) {
    vector<bool> find(n, false);
    for(int i = 0; i < m; i++) {
      if(bit & (1 << i)) {
        for(int j = 1; j <= n; j++) {
          if(s[i].find(j) != s[i].end()) find[j - 1] = true;
        }
      }
    }

    bool check = true;
    for(int i = 0; i < n; i++) if(!find[i]) check = false;

    if(check) ans++;
  }

  cout << ans;
  return 0;
}