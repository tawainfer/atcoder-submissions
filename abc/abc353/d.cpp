// https://atcoder.jp/contests/abc353/submissions/53381681

#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n + 1);
  map<ll, ll> m;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    m[to_string(a[i]).size()]++;
  }

  vector<ll> b(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    b[i] = b[i - 1] + a[i];
  }

  mint ans(0);
  for(int i = 1; i <= n; i++) {
    m[to_string(a[i]).size()]--;

    ans += b[n] - b[i];
    for(int j = 1; j <= 10; j++) {
      mint p(10);
      ans += p.pow(j) * a[i] * m[j];
    }
  }

  cout << ans.val();
}
