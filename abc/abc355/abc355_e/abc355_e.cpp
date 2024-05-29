#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = static_modint<100>;
typedef long long ll;

int rec(pair<ll, ll> p, set<pair<ll, ll>> &m) {
  m.insert(p);
  int d = p.second - p.first;
  if(d <= 1) return 0;
  return rec(make_pair(p.first, p.first + d / 2), m) + rec(make_pair(p.second - d / 2, p.second), m);
}

int main() {
  ll n, l, r;
  cin >> n >> l >> r;
  r++;

  set<pair<ll, ll>> m;
  rec(make_pair(0, (1 << n)), m);
  
  vector<set<ll>> g((1 << n) + 1);
  for(auto p : m) {
    ll u = p.first;
    ll v = p.second;
    g[u].insert(v);
    g[v].insert(u);
  }

  vector<bool> seen((1 << n) + 1, false);
  seen[l] = true;
  vector<ll> min_route;
  queue<vector<ll>> q;
  q.push({l});

  while(!q.empty()) {
    vector<ll> route = q.front();
    q.pop();

    ll cp = route.back();
    for(ll ep : g[cp]) {
      if(!seen[ep]) {
        seen[ep] = true;
        route.push_back(ep);
        q.push(route);
        route.pop_back();
      }
    }

    if(route.back() == r && (min_route.size() == 0 || route.size() < min_route.size())) {
      min_route = route;
    }
  }

  mint ans = 0;
  for(int k = 1; k < min_route.size(); k++) {
    ll cl = min_route[k - 1];
    ll cr = min_route[k];
    bool sf = true;
    if(cr - cl <= 0) {
      sf = false;
      swap(cl, cr);
    }

    ll i = 0;
    ll x = cr - cl;
    while(x >= 2) {
      i++;
      x /= 2;
    }

    ll j = cl / (1 << i);
    cout << "? " << i << " " << j << endl;
    
    ll t;
    cin >> t;
    ans += t * (sf ? 1 : -1);
  }

  cout << "! " << ans.val() << endl;
}