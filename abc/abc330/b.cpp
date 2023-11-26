// https://atcoder.jp/contests/abc330/submissions/47903131

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, l, r;
  cin >> n >> l >> r;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  for(auto x : a) {
    if(l <= x && x <= r) {
      cout << x << endl;
    } else if(abs(l - x) < abs(r - x)) {
      cout << l << endl;
    } else {
      cout << r << endl;
    }
  }
}
