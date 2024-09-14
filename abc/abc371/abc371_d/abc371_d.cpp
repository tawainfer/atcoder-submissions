#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> x(n);
  for(auto &z : x) cin >> z;

  vector<ll> p(n);
  for(auto &z : p) cin >> z;

  vector<ll> v = {-INF};
  for(auto z : x) v.push_back(z);
  v.push_back(INF);

  vector<ll> rv = {0};
  for(int i = 0; i < n; i++) rv.push_back(rv.back() + p[i]);

  int q;
  cin >> q;

  for(int _ = 0; _ < q; _++) {
    ll l, r;
    cin >> l >> r;
    ll idx1 = distance(v.begin(), lower_bound(v.begin(), v.end(), l));
    ll idx2 = distance(v.begin(), upper_bound(v.begin(), v.end(), r));
    cout << rv[idx2 - 1] - rv[idx1 - 1] << endl;
  }
}