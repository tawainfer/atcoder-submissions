// https://atcoder.jp/contests/abc142/submissions/27282900

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, h, ans = 0; cin >> n >> k;
  while(cin >> h) if(h >= k) ans++;
  cout << ans;
}
