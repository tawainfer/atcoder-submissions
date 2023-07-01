// https://atcoder.jp/contests/abc132/submissions/27701408

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  int p[n];
  for(int i = 0; i < n; i++) cin >> p[i];
  for(int i = 2; i < n; i++) {
    if(max({p[i-2], p[i-1], p[i]}) != p[i-1] && min({p[i-2], p[i-1], p[i]}) != p[i-1]) ans++;
  }
  cout << ans;
}
