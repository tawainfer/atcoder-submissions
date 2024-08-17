#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  vector<ll> b;
  b.push_back(0);
  for(auto x : a) b.push_back(b.back() + x);
  for(auto x : a) b.push_back(b.back() + x);
  for(auto x : a) b.push_back(b.back() + x);
  // for(auto x : b) cout << x << " ";
  // cout << endl;
  
  vector<ll> buf(m, 0);
  for(ll i = 0; i < n; i++) {
    buf[b[i] % m]++;
  }

  ll ans = 0;
  ll t = 0;
  for(ll i = 0; i < n; i++) {
    t = b[i] % m;
    buf[b[i] % m]--;
    // ll p = (m - b[i] % m) % m;
    // cout << "p=" << p << endl;
    ans += buf[t];
    // cout << i << " " << ans << endl;
    // for(auto x : buf) cout << x << " ";
    // cout << endl;
    buf[b[i + n] % m]++;
  }

  cout << ans;
}