#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  string s;
  cin >> s;

  vector<ll> idx_x[3];
  vector<pair<ll, ll>> idx_ex[3][3]; // idx, cnt_x

  for(ll i = 0; i < n; i++) {
    if(s[i] == 'X') idx_x[a[i]].push_back(i);
  }

  for(ll i = 0; i < n; i++) {
    if(s[i] != 'E') continue;

    for(ll j = 0; j < 3; j++) {
      auto iter = upper_bound(idx_x[j].begin(), idx_x[j].end(), i);
      ll cnt_x = (iter == idx_x[j].end() ? 0 : idx_x[j].size() - distance(idx_x[j].begin(), iter));
      idx_ex[a[i]][j].push_back(make_pair((ll)i, (ll)cnt_x));
    }
  }

  for(ll i = 0; i < 3; i++) {
    for(ll j = 0; j < 3; j++) {
      if(idx_ex[i][j].size() < 2) continue;

      for(ll k = idx_ex[i][j].size() - 1; k > 0; k--) {
        idx_ex[i][j][k - 1].second += idx_ex[i][j][k].second;
      }
    }
  }

  ll ans = 0;
  for(ll i = 0; i < n; i++) {
    if(s[i] != 'M') continue;

    for(ll j = 0; j < 3; j++) {
      for(ll k = 0; k < 3; k++) {
        auto iter = upper_bound(idx_ex[j][k].begin(), idx_ex[j][k].end(), make_pair((ll)i, (ll)-1));
        if(iter == idx_ex[j][k].end()) continue;
        ll cnt_ex = (*iter).second;

        set<ll> se;
        se.insert(j);
        se.insert(k);
        se.insert(a[i]);

        ll mex;
        for(ll l = 0; l <= 3; l++) {
          if(se.find(l) == se.end()) {
            mex = l;
            break;
          }
        }

        ans += mex * cnt_ex;
      }
    }
  }

  cout << ans;
  return 0;
}