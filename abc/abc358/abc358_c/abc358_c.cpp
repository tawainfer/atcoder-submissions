#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> v;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  int ans = n;
  for(int bit = 0; bit < (1 << n); bit++) {
    int cnt = 0;
    set<int> ptn;
    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) {
        cnt++;
        ptn.insert(i);
      }
    }

    vector<bool> check(m, false);
    for(int i : ptn) {
      for(int j = 0; j < m; j++) {
        if(v[i][j] == 'o') {
          check[j] = true;
        }
      }
    }

    int c = 0;
    for(int i = 0; i < m; i++) {
      if(check[i]) {
        c++;
      }
    }

    if(c == m) {
      ans = min(ans, cnt);
    }
  }

  cout << ans;
}