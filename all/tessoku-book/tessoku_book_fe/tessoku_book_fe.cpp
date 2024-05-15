#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(ll &z : a) cin >> z;
  sort(a.begin(), a.end());
  a.push_back(2e18);

  ll q;
  cin >> q;

  ll t;
  vector<pair<ll, ll>> x;
  for(ll i = 0; i < q; i++) {
    cin >> t;
    x.push_back(make_pair(t, i));
  }
  sort(x.begin(), x.end());

  ll sum = 0;
  ll idx = 0;
  for(ll i = 0; i < q; i++) {
    while(sum + a[idx] <= x[i].first) {
      sum += a[idx];
      idx++;
    }
    x[i] = make_pair(x[i].second, idx);
  }
  sort(x.begin(), x.end());

  for(auto p : x) {
    cout << p.second << endl;
  }
}