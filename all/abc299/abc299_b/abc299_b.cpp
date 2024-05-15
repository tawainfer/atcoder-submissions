#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  vector<int> c(n), r(n);
  set<int> s;
  for(auto &z : c) {
    cin >> z;
    s.insert(z);
  }
  for(auto &z : r) cin >> z;

  if(s.find(t) == s.end()) t = c[0];

  int val = -2e9;
  int ans = -1;
  for(int i = 0; i < n; i++) {
    if(c[i] == t && val < r[i]) {
      ans = i;
      val = r[i];
    }
  }

  cout << ans + 1;
}