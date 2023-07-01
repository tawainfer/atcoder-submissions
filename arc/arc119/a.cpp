// https://atcoder.jp/contests/arc119/submissions/30341542

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n, ans = 1e18; cin >> n;
  for(long long i = 0; i < 61; i++) {
    long long b = i, a = n / (1LL << i), c = n - a * (1LL << i);
    ans = min(ans, a + b + c);
  }
  cout << ans;
}
