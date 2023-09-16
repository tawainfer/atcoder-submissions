// https://atcoder.jp/contests/abc320/submissions/45621644

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> t(m), w(m), s(m);
  for(int i = 0; i < m; i++) cin >> t[i] >> w[i] >> s[i];

  vector<ll> cnt(n, 0);
  set<ll> se;
  for(int i = 0; i < n; i++) se.insert(i);
  vector<vector<ll>> wait(m);

  for(int i = 0; i < m; i++) {
    while(!wait[i].empty()) {
      se.insert(wait[i].back());
      wait[i].pop_back();
    }

    if(se.size() > 0) {
      ll cp = (*(se.begin()));
      cnt[cp] += w[i];
      se.erase(se.begin());

      auto iter = lower_bound(t.begin(), t.end(), t[i] + s[i]);
      if(iter != t.end()) {
        ll idx = distance(t.begin(), iter);
        wait[idx].push_back(cp);
      }
    }
  }

  for(int i = 0; i < n; i++) {
    cout << cnt[i] << endl;
  }
}
