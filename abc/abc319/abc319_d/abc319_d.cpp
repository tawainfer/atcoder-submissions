#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  ll ma = -INF;
  vector<ll> a(n);
  for(auto &z : a) {
    cin >> z;
    ma = max(ma, z);
  }

  ll ng = ma - 1;
  ll ok = 2e18;
  while(ok - ng > 1) {
    ll w = (ok + ng) / 2;
    ll cnt = 0;
    ll row = 1;

    for(ll x : a) {
      ll v = cnt + (cnt != 0) + x;
      if(v > w) {
        row++;
        cnt = x;
      } else {
        cnt = v;
      }
    }

    if(row <= m) ok = w;
    else ng = w;
  }

  cout << ok;
  return 0;
}