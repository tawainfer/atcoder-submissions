// https://atcoder.jp/contests/abc348/submissions/52074975

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, set<int>> m;
  for(int i = 0; i < n; i++) {
    int a, c;
    cin >> a >> c;
    m[c].insert(a);
  }

  int ans = 0;
  for(auto p : m) {
    if(p.second.size() >= 1) {
      ans = max(ans, (*p.second.begin()));
    }
  }

  cout << ans;
}
