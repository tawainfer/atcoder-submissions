// https://atcoder.jp/contests/abc323/submissions/46317509

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  set<ll> se;
  map<ll, ll> m;
  for(int i = 0; i < n; i++) {
    ll s, c;
    cin >> s >> c;
    se.insert(s);
    m[s] = c;
  }

  vector<ll> pow2 = {1};
  for(int i = 0; i < 60; i++) {
    pow2.push_back(pow2.back() * 2);
  }
  // for(auto x : pow2) cout << x << " ";
  // cout << endl;

  ll ans = 0;
  while(se.size() > 0) {
    auto iter = se.begin();
    ll cs = (*iter);
    ll cc = m[cs];
    se.erase(iter);
    // cout << cs << endl;

    if(cc % 2 != 0) {
      ans++;
    }

    for(int i = pow2.size() - 1; i > 0; i--) {
      if(cc >= pow2[i]) {
        cc -= pow2[i];
        m[cs * pow2[i]]++;
        se.insert(cs * pow2[i]);
      }
    }
  }

  cout << ans;
  return 0;
}
