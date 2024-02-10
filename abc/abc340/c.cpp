// https://atcoder.jp/contests/abc340/submissions/50155044

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll x, map<ll, ll> &m) {
  if(x == 1) {
    return 0;
  }

  if(m.find(x) != m.end()) {
    return m[x];
  } else {
    return m[x] = x + f(x / 2, m) + f((x + 2 - 1) / 2, m);
  }
}

int main() {
  ll n;
  cin >> n;

  vector<ll> ptn = {n};
  map<ll, ll> m;
  m[1] = 0;

  ll ans = 0;
  while(!ptn.empty()) {
    ll x = ptn.back();
    ptn.pop_back();
    ans += f(x, m);
  }

  cout << ans;
}
