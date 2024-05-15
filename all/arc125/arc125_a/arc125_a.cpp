#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);
  for(auto &x : a) cin >> x;
  for(auto &x : b) cin >> x;

  int f, d = n;
  if(a[0] == 1) f = 1;
  else f = 0;

  for(int i = 0; i < n; i++) {
    if(a[i] == 1 - f) d = min({d, i, n - i});
  }

  int ans = 0;
  for(auto x : b) {
    if(x == f) ans++;
    else {
      if(d == n) {
        cout << -1;
        return 0;
      }
      ans += d + 1;
      d = 1;
      f = 1 - f;
    }
  }

  cout << ans;
  return 0;
}