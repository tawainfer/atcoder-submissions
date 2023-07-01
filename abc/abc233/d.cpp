// https://atcoder.jp/contests/abc233/submissions/37246156

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll n, k;
  cin >> n >> k;

  vector<ll> a(n + 1, 0), b(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    if(i == 1) b[i] = a[i];
    else b[i] = b[i - 1] + a[i];
  }

  ll ans = 0;
  map<ll, ll> m;
  for(int r = 1; r <= n; r++) {
    m[b[r - 1]]++;
    ans += m[b[r] - k];
  }

  cout << ans;
  return 0;
}
