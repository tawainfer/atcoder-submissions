#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n + 1);
  a[0] = 0;
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<ll> b = {0};
  map<ll, ll> m;
  m[0] = 1;
  for(int i = 1; i <= n; i++) {
    b.push_back(b.back() + a[i]);
    if(m.find(b.back()) == m.end()) m[b.back()] = 1;
    else m[b.back()]++;
  }

  ll ans = 0;
  for(auto &z : m) {
    ans += z.second * (z.second - 1) / 2;
    // cout << z.first << " " << z.second << endl;
  }

  cout << ans;
  return 0;
}