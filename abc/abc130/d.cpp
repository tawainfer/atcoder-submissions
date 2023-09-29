// https://atcoder.jp/contests/abc130/submissions/46021578

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >>  a[i];
  }

  vector<ll> b(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    b[i] = b[i - 1] + a[i];
  }

  ll ans = 0;
  for(int i = 1; i <= n; i++) {
    auto iter = lower_bound(b.begin(), b.end(), k + b[i - 1]);
    ans += (iter == b.end() ? 0LL : n - distance(b.begin(), iter) + 1);
  }

  cout << ans;
  return 0;;
}
