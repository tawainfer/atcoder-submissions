// https://atcoder.jp/contests/abc334/submissions/48792455

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, q;
  cin >> n >> q;

  vector<ll> r(n);
  for(auto &z : r) cin >> z;
  sort(r.begin(), r.end());

  vector<ll> s = {0};
  for(auto x : r) {
    s.push_back(s.back() + x);
  }

  for(int i = 0; i < q; i++) {
    ll x;
    cin >> x;

    auto iter = upper_bound(s.begin(), s.end(), x);
    cout << (iter == s.end() ? n : distance(s.begin(), iter) - 1) << endl;
  }
}
