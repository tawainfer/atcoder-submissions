// https://atcoder.jp/contests/abc153/submissions/29824681

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long h, ans = 0, cnt = 1; cin >> h;
  while(h > 0) {
    ans += cnt;
    h /= 2;
    cnt *= 2;
  }
  cout << ans;
}
