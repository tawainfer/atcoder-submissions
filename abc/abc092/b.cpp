// https://atcoder.jp/contests/abc092/submissions/28347825

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, d, x, a, cnt = 0; cin >> n >> d >> x;
  while(n--) {
    cin >> a;
    for(int i = 0; i * a + 1 <= d; i++) {
      cnt++;
    }
  }
  cout << cnt + x;
}
