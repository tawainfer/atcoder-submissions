#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  map<int, int> m;
  m[a[0]] = 1;
  set<int> se;
  se.insert(a[0]);

  int ans = 1;
  int l = 0, r = 0;

  while(l < n) {
    if(se.size() <= k && r != n - 1) {
      r++;
      if(m.find(a[r]) == m.end()) m[a[r]] = 1;
      else m[a[r]]++;
      se.insert(a[r]);
    } else {
      if(m[a[l]] == 1) se.erase(a[l]);
      m[a[l]]--;
      l++;
    }

    if(se.size() <= k) ans = max(ans, r - l + 1);
  }

  cout << ans;
  return 0;
}