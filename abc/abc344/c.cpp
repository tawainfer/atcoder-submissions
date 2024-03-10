// https://atcoder.jp/contests/abc344/submissions/51035054

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  ll m;
  cin >> m;

  vector<ll> b(m);
  for(auto &z : b) cin >> z;

  ll l;
  cin >> l;

  vector<ll> c(l);
  for(auto &z : c) cin >> z;

  set<ll> se;
  for(ll x : a) {
    for(ll y : b) {
      for(ll z : c) {
        se.insert(x + y + z);
      }
    }
  }

  ll q;
  cin >> q;
  for(int _ = 0; _ < q; _++) {
    ll x;
    cin >> x;
    cout << (se.find(x) != se.end() ? "Yes" : "No") << endl;
  }
}
