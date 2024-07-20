#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, p;
  cin >> n >> t >> p;

  vector<int> l(n);
  for(auto &z : l) cin >> z;

  int ans = 0;
  while(1) {
    int cnt = 0;
    for(auto x : l) {
      if(x >= t) {
        cnt++;
      }
    }

    if(cnt >= p) {
      cout << ans;
      return 0;
    }

    ans++;
    for(int i = 0; i < n; i++) {
      l[i]++;
    }
  }
}