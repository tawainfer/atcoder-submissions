// https://atcoder.jp/contests/arc170/submissions/49557103

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

bool f(int x) {
  return (1 <= x && x <= 10);
}

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  vector<set<int>> idx(19);
  for(int i = 0; i < n; i++) {
    idx[a[i]].insert(i);
  }

  vector<int> mir(n + 2, INF);
  for(int i = 0; i < n; i++) {
    int x = a[i];

    for(int j = -10; j <= 10; j++) {
      int y = x + j;
      int z = y + (y - x);
      if(!f(x) || !f(y) || !f(z)) continue;

      auto iter = idx[y].upper_bound(i);
      if(iter == idx[y].end()) continue;
      auto iter2 = idx[z].upper_bound((*iter));
      if(iter2 == idx[z].end()) continue;
      mir[i] = min(mir[i], (*iter2));
    }
  }

  for(int i = mir.size() - 1; i > 0; i--) {
    mir[i - 1] = min(mir[i - 1], mir[i]);
  }

  long long ans = 0;
  for(int i = 0; i < n; i++) {
    if(mir[i] != INF) ans += n - mir[i];
  }
  cout << ans;
}
