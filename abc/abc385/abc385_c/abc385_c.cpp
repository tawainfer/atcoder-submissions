#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> h(n);
  for(auto &z : h) cin >> z;

  map<int, set<int>> ma;
  for(int i = 0; i < n; i++) {
    ma[h[i]].insert(i);
  }

  int ans = 1;
  for(int i = 0; i < n; i++) {
    for(int d = 1; d <= 3000; d++) {
      int idx = i;
      int cnt = 1;
      if(idx + d >= n) break;

      while(idx + d < n && ma[h[i]].find(idx + d) != ma[h[i]].end()) {
        idx += d;
        cnt++;
      }

      ans = max(cnt, ans);
    }
  }

  cout << ans;
}