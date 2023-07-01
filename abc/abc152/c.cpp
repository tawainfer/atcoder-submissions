// https://atcoder.jp/contests/abc152/submissions/29953591

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  int n, mi = 1e9, ans = 0;
  cin >> n;
  vector<int> p(n);
  for(auto& z : p) cin >> z;

  for(int i = 0; i < n; i++) {
    mi = min(mi, p[i]);
    if(mi == p[i]) ans++;
  }
  cout << ans;
}
