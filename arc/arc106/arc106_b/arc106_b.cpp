#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> g[200009];

void dfs(ll i, ll &odd, ll &even, vector<ll> &t, vector<bool> &seen, bool parity) {
  for (auto &z : g[i]) {
    if(!seen[z]) {
      seen[z] = true;
      (parity ? odd += t[z]: even += t[z]);
      dfs(z, odd, even, t, seen, !parity);
    }
  }
}

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n), b(n), t(n);
  for (auto &z : a) cin >> z;
  for (auto &z : b) cin >> z;
  for (ll i = 0; i < n; i++) t[i] = a[i] - b[i];

  if(n == 1 && t[0] == 0) {
    cout << "Yes";
    return 0;
  }

  ll c, d;
  for(ll i = 0; i < m; i++) {
    cin >> c >> d;
    g[c - 1].push_back(d - 1);
    g[d - 1].push_back(c - 1);
  }

  vector<bool> seen(200009, false);
  for (ll i = 0; i < n; i++) {
    if (g[i].size() == 0 && t[i] != 0) {
      cout << "No";
      return 0;
    }

    if (seen[i]) continue;
    seen[i] = true;

    ll odd = t[i];
    ll even = 0;
    dfs(i, odd, even, t, seen, false);

    if(odd + even != 0) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
  return 0;
}