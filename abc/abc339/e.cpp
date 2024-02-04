// https://atcoder.jp/contests/abc339/submissions/49982661

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;
const ll SQ = 709;

int main() {
  ll n, d;
  cin >> n >> d;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  vector<ll> ans(n, -INF);
  vector<ll> b(SQ * SQ, 0);
  vector<ll> c(SQ, 0);
  ans.back() = 1;
  b[a.back()] = 1;
  c[a.back() / SQ] = 1;

  for(int i = n - 2; i >= 0; i--) {
    ll l = a[i] - d;
    ll r = a[i] + d;
    
    ll ma = 0;
    for(int j = 0; j < SQ; j++) {
      ll cl = j * SQ;
      ll cr = (j + 1) * SQ - 1;

      if(l <= cl && cr <= r) {
        ma = max(ma, c[j]);
      } else if(cr < l || r < cl) {
      } else {
        for(int k = SQ - 1; k >= 0; k--) {
          if(!(l <= j * SQ + k && j * SQ + k <= r)) continue;
          ma = max(ma, b[j * SQ + k]);
        }
      }
    }
    ma++;

    ans[i] = max(ans[i], ma);
    b[a[i]] = max(b[a[i]], ma);
    c[a[i] / SQ] = max(c[a[i] / SQ], ma);
  }

  ll ma = 0;
  for(int i = 0; i < n; i++) {
    ma = max(ans[i], ma);
  }
  cout << ma;
}
