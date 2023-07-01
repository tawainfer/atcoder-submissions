// https://atcoder.jp/contests/abc132/submissions/28644519

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  int p[n];
  for(int i = 0; i < n; i++) cin >> p[i];
  sort(p, p + n);
  cout << p[n/2] - p[n/2-1];
}
