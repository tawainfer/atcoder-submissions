#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  ll ok = 0;
  ll ng = INF;
  while(ng - ok > 1) {
    ll mid = (ok + ng) / 2;
    ll sum = 0;
    for(auto x : a) {
      sum += min(x, mid);
    }

    if(sum <= m) {
      ok = mid;
    } else {
      ng = mid;
    }
  }

  if(ok == INF - 1) {
    cout << "infinite";
  } else {
    cout << ok;
  }
}