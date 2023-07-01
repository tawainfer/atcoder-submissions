// https://atcoder.jp/contests/abc239/submissions/29445506

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  long long x; cin >> x;
  if(x > -10 && x < 0) cout << -1;
  else if(x / 10 < 0 && x % 10 != 0) cout << x / 10 - 1;
  else cout << x / 10;
}
