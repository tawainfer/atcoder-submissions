// https://atcoder.jp/contests/abc161/submissions/26671555

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, s = 0, t = 0;
  cin >> n >> m;
  int a[n];
  for(int i = 0; i < n; i++) {cin >> a[i]; s += a[i];}
  for(int i = 0; i < n; i++) if(s <= a[i] * 4*m) t++;
  if(m <= t) cout << "Yes";
  else cout << "No";
}
