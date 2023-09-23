// https://atcoder.jp/contests/abc321/submissions/45883583

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, p;
  cin >> n >> m >> p;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  vector<ll> b(m);
  for(auto &z : b) cin >> z;
  sort(b.begin(), b.end());

  vector<ll> c(m);
  c[0] = b[0];
  for(int i = 1; i < m; i++) {
    c[i] = c[i - 1] + b[i];
  }

  ll ans = 0;
  for(auto x : a) {
    auto iter = upper_bound(b.begin(), b.end(), p - x);
    if(iter == b.end()) {
      ans += x * m + c[m - 1];
      continue;
    } else if(iter == b.begin()) {
      ans += p * m;
      continue;
    }

    ll d = distance(b.begin(), iter);
    ans += x * d + c[d - 1] + (m - d) * p;
  }

  cout << ans;
  return 0;
}
