// https://atcoder.jp/contests/abc290/submissions/39010312

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n) , b(m);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;

  int ans = 0;
  for(auto &z : b) ans += a[z - 1];

  cout << ans;
  return 0;
}
