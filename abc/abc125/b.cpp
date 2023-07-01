// https://atcoder.jp/contests/abc125/submissions/27961769

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  int v[n], c[n];
  for(int i = 0; i < n; i++) cin >> v[i];
  for(int i = 0; i < n; i++) cin >> c[i];
  for(int i = 0; i < n; i++) if(0 < v[i] - c[i]) ans += v[i] - c[i];
  cout << ans;
}
