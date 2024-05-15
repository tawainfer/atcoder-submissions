#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string s, t;
  cin >> s >> t;

  vector<bool> seen(n, false);
  set<int> se;

  for(int i = 0; i < n - m + 1; i++) {
    bool check = true;

    for(int j = 0; j < m; j++) {
      if(!(s[i + j] == t[j] || s[i + j] == '#')) {
        check = false;
        break;
      }
    }

    if(check) {
      seen[i] = true;
      se.insert(i);
    }
  }

  while(se.size() > 0) {
    int i = (*se.begin());
    se.erase(se.begin());

    for(int j = 0; j < m; j++) {
      s[i + j] = '#';
    }

    for(int k = max(i - m, 0); k < min(i + m, n - m + 1); k++) {
      bool check = true;

      for(int j = 0; j < m; j++) {
        if(!(s[k + j] == t[j] || s[k + j] == '#')) {
          check = false;
          break;
        }
      }

      if(check && !seen[k]) {
        seen[k] = true;
        se.insert(k);
      }
    }
  }

  for(char c : s) {
    if(c != '#') {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}