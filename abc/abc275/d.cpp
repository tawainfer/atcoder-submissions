// https://atcoder.jp/contests/abc275/submissions/38132386

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll, ll> m;

ll f(ll x) {
  if(x == 0) return 1;

  if(m.find(x) != m.end()) return m[x];
  m[x] = f(x / 2) + f(x / 3);
  return m[x];
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;

  cout << f(n);
}
