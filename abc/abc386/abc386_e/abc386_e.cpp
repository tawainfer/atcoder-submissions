#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void combine(vector<ll>& a, ll k, ll start, vector<ll>& v, vector<vector<ll>>& res) {
  if (v.size() == k) {
    res.push_back(v);
    return;
  }

  for (ll i = start; i < a.size(); ++i) {
    v.push_back(a[i]);
    combine(a, k, i + 1, v, res);
    v.pop_back();
  }
}

vector<vector<ll>> combinations(vector<ll>& a, ll k) {
    vector<vector<ll>> res;
    vector<ll> v;
    combine(a, k, 0, v, res);
    return res;
}

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  ll tk = 1;
  for(int _ = 2; _ <= n; _++) {
    ll u = 1;
    for(int i = 0; i < tk + 1; i++) u *= (n - i);

    ll d = 1;
    for(int i = 0; i < tk + 1; i++) d *= (i + 1);

    if(u / d >= 1000000) break;
    tk++;
  }

  // for(auto v : combinations(a, k)) {
  //   for(auto x : v) {
  //     cout << x << " ";
  //   }
  //   cout << endl;
  // }

  long long ans = 0;
  if(k <= tk) {
    for(auto v : combinations(a, k)) {
      ll xsum = 0;
      for(auto x : v) xsum ^= x;
      ans = max(xsum, ans);
    }
  } else {
    ll rk = n - k;
    ll base = 0;
    for(auto x : a) base ^= x;

    for(auto v : combinations(a, rk)) {
      ll xsum = base;
      for(auto x : v) xsum ^= x;
      ans = max(xsum, ans);
    }
  }

  cout << ans;
}