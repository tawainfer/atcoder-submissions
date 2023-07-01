// https://atcoder.jp/contests/arc107/submissions/30359977

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long a, b, c, mod = 998244353;
  cin >> a >> b >> c;
  cout << ((a * (a + 1) / 2) % mod) * ((b * (b + 1) / 2) % mod) % mod *
            ((c * (c + 1) / 2) % mod) % mod;
}
