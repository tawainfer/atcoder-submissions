// https://atcoder.jp/contests/abc102/submissions/45097145

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

ll score(vector<ll> &a, ll b) {
  ll res = 0;
  for(ll x : a) res += abs(x - b);
  return res;
}

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] -= i;
  }

  ll l = -2e9;
  ll r = 2e9;
  while(r - l >= 3) {
    ll p1 = l + (r - l) / 3;
    ll p2 = r - (r - l) / 3;
    ll s1 = score(a, p1);
    ll s2 = score(a, p2);
    if(s1 > s2) l = p1;
    else r = p2;
  }

  ll ans = INF;
  for(ll i = 0; i <= 2; i++) {
    ans = min(ans, score(a, l + i));
  }

  cout << ans;
  return 0;
}
