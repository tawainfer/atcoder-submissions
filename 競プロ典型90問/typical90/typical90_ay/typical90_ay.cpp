#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bit_search(vector<ll> &v, map<ll, vector<ll>> &res) {
  for(ll bit = 0; bit < (1LL << v.size()); bit++) {
    ll cnt = 0;
    ll sum = 0;
    for(ll i = 0; i < v.size(); i++) {
      if(bit & (1LL << i)) {
      cnt++;
        sum += v[i];
      }
    }

    res[cnt].push_back(sum);
  }

  for(auto p : res) {
    sort(res[p.first].begin(), res[p.first].end());
  }
}

int main() {
  ll n, k, p;
  cin >> n >> k >> p;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  vector<ll> b;
  while(a.size() > n / 2) {
    b.push_back(a.back());
    a.pop_back();
  }

  map<ll, vector<ll>> sa, sb;
  bit_search(a, sa);
  bit_search(b, sb);

  ll ans = 0;
  for(const auto& [cnt, v] : sa) {
    for(ll x : v) {
      ans += distance(sb[k - cnt].begin(), upper_bound(sb[k - cnt].begin(), sb[k - cnt].end(), p - x));
    }
  }

  cout << ans;
}