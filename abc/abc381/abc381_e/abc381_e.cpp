#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using namespace atcoder;
typedef long long ll;

int main() {
  ll n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  vector<ll> i1, i2, is;
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') {
      i1.push_back(i);
    } else if(s[i] == '2') {
      i2.push_back(i);
    } else {
      is.push_back(i);
    }
  }

  for(int _ = 0; _ < q; _++) {
    ll l, r;
    cin >> l >> r;
    l--;
    r--;

    ll ans = 0;
    ll ok = 0;
    ll ng = 100000;
    while(ng - ok > 1) {
      ll mid = (ok + ng) / 2;

      ll sidx1 = distance(i1.begin(), lower_bound(i1.begin(), i1.end(), l));
      ll gidx1 = sidx1 + mid - 1;
      if(gidx1 >= i1.size() || i1[gidx1] >= r) {
        ng = mid;
        continue;
      }

      ll sidxs = distance(is.begin(), upper_bound(is.begin(), is.end(), i1[gidx1]));
      ll gidxs = sidxs;
      if(gidxs >= is.size() || is[gidxs] >= r) {
        ng = mid;
        continue;
      }

      ll sidx2 = distance(i2.begin(), upper_bound(i2.begin(), i2.end(), is[gidxs]));
      ll gidx2 = sidx2 + mid - 1;
      if(gidx2 >= i2.size() || i2[gidx2] > r) {
        ng = mid;
        continue;
      }

      ok = mid;
    }

    if(ok != 0) {
      cout << ok * 2 + 1 << endl;
      continue;
    } else {
      ll idx = distance(is.begin(), lower_bound(is.begin(), is.end(), l));
      cout << (idx < is.size() && is[idx] <= r ? 1 : 0) << endl;
    }
  }
}
