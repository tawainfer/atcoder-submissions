// https://atcoder.jp/contests/abc341/submissions/50337294

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  vector<ll> s, t;
  for(int i = 0; i < n - 1; i++) {
    ll x, y;
    cin >> x >> y;
    s.push_back(x);
    t.push_back(y);
  }

  for(int i = 0; i < n - 1; i++) {
    a[i + 1] += a[i] / s[i] * t[i];
  }

  cout << a[n - 1];
}
