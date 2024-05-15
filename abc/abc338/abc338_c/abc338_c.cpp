#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1000000;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> q(n), a(n), b(n);
  for(auto &z : q) cin >> z;
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;

  ll ans = 0;
  for(ll i = 0; i <= MAX; i++) {
    ll cnt = i;
    for(ll j = 0; j < n; j++) {
      if(a[j] == 0) continue;
      cnt = min(q[j] / a[j], cnt);
    }
    
    ll cnt2 = INF;
    for(ll j = 0; j < n; j++) {
      if(b[j] == 0) continue;
      cnt2 = min((q[j] - a[j] * cnt) / b[j], cnt2);
    }

    ans = max(ans, cnt + cnt2);
  }

  cout << ans;
}