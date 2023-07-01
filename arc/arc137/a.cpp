// https://atcoder.jp/contests/arc137/submissions/30233865

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long l, r;
  cin >> l >> r;

  for(long long n = r - l; n >= 1; n--) {
    for(long long y = r; y >= l + n; y--) {
            long long x = y - n;

      if(gcd(x, y) == 1) {
        cout << y - x;
        return 0;
      }
    }
  }
}
