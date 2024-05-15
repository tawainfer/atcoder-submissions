#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll x) {
  for(ll i = 2; i * i <= x; i++) {
    while(x % (i * i) == 0) {
      x /= i * i;
    }
  }

  return x;
}

int main() {
  ll n;
  cin >> n;

  vector<int> a(n);
  for(auto &x : a) cin >> x;

  map<ll, ll> m;
  ll cnt = 0;

  for(auto x : a) {
    if(x == 0) {
      cnt++;
    } else {
      m[f(x)]++;
    }
  }

  ll ans = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == 0) {
      ans += n - i - 1;
      cnt--;
    } else {
      ans += m[f(a[i])] - 1 + cnt;
      m[f(a[i])]--;
    }
  }

  cout << ans;
}