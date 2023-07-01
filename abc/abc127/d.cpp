// https://atcoder.jp/contests/abc127/submissions/42773419

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  ll a;
  map<ll, ll> rle;
  
  for(ll i = 0; i < n; i++) {
    cin >> a;
    rle[-a]++;
  }

  ll b, c;
  while(cin >> b >> c) rle[-c] = min(rle[-c] + b, n);
  
  ll cnt = 0;
  ll ans = 0;
  for(auto p : rle) {
    ll cn = -p.first;
    ll cc = p.second;
    if(cnt == n) break;

    if(cnt + cc <= n) {
      ans += cn * cc;
      cnt += cc;
    } else {
      ans +=  cn * (n - cnt);
      cnt = n;
    }
  }

  cout << ans;
  return 0;
}
