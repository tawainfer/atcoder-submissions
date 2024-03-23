// https://atcoder.jp/contests/abc346/submissions/51612382

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> c(n);
  for(auto &z : c) cin >> z;

  vector<ll> b1 = {0};
  for(int i = 0; i < n; i++) {
    if(i % 2 == (int)(s[i] - '0')) {
      b1.push_back(b1.back() + c[i]);
    } else {
      b1.push_back(b1.back());
    }
  }

  vector<ll> b2 = {0};
  for(int i = 0; i < n; i++) {
    if(i % 2 != (int)(s[i] - '0')) {
      b2.push_back(b2.back() + c[i]);
    } else {
      b2.push_back(b2.back());
    }
  }

  ll ans = INF;
  for(int i = 0; i < n - 1; i++) {
    ll l1 = (i == 0 ? 0 : b1[i]);
    ll c1 = (i % 2 == (int)(s[i] - '0') ? c[i] : 0);
    ll r1 = (i == n - 1 ? 0 : b2.back() - b2[i + 1]);
    ll s1 = l1 + c1 + r1;
    ans = min(ans, s1);

    ll l2 = (i == 0 ? 0 : b2[i]);
    ll c2 = (i % 2 != (int)(s[i] - '0') ? c[i] : 0);
    ll r2 = (i == n - 1 ? 0 : b1.back() - b1[i + 1]);
    ll s2 = l2 + c2 + r2;
    ans = min(ans, s2);
  }
  cout << ans;
}
