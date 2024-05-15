#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> c(n), d(m);
  for(auto &z : c) cin >> z;
  for(auto &z : d) cin >> z;

  vector<int> p(m + 1);
  for(auto &z : p) cin >> z;

  map<string, int> ma;
  for(int i = 1; i <= m; i++) {
    ma[d[i - 1]] = p[i];
  }

  int ans = 0;
  for(int i = 0; i < n; i++) {
    bool check = false;
    for(int j = 0; j < m; j++) {
      if(c[i] == d[j]) {
        check = true;
        ans += ma[d[j]];
      }
    }

    if(!check) {
      ans += p[0];
    }
  }

  cout << ans;
  return 0;
}