#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> t(q);
  for(auto &z : t) cin >> z;

  vector<bool> b(n + 1, true);
  for(auto x : t) {
    b[x] = !b[x];
  }

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    if(b[i]) {
      ans++;
    }
  }

  cout << ans;
}