// https://atcoder.jp/contests/abc163/submissions/27701576

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, a; cin >> n >> m;
  while(cin >> a && n >= 0) {
    n -= a;
  }
  if(n < 0) cout << -1;
  else cout << n;
}
