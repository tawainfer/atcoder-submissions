#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll m = 1000000;

  vector<ll> a(n);
  vector<ll> c(m + 1, 0), rc(m + 1, 0);
  for(auto &x : a) {
    cin >> x;
    c[x]++;
    rc[x]++;
  }

  for(int i = 1; i < rc.size(); i++) {
    rc[i] += rc[i - 1];
  }

  set<int> se;
  for(auto x : a) {
    se.insert(x);
  }

  ll ans = 0;
  for(auto x : se) {
    ll b = 1;
    ll l = x;
    while(l <= m)  {
      ll r = l + x - 1;
      ans += b * (rc[(r > m ? m : r)] - rc[l - 1]) * c[x];
      l = r + 1;
      b++;
    }

    ans -= c[x] * (1 + c[x]) / 2;
  }

  cout << ans;
}