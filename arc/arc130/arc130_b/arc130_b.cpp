#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll h, w, x;
  cin >> h >> w >> x;

  set<ll> row, col;
  vector<ll> cnt(x + 1, 0);

  ll q;
  cin >> q;

  vector<ll> t(q), n(q), c(q);
  for(ll i = 0; i < q; i++) cin >> t[i] >> n[i] >> c[i];

  while(q--) {
    if(t[q] == 1) {
      if(row.find(n[q]) == row.end()) {
        row.insert(n[q]);
        cnt[c[q]] += (w - col.size());
      }
    }

    if(t[q] == 2) {
      if(col.find(n[q]) == col.end()) {
        col.insert(n[q]);
        cnt[c[q]] += (h - row.size());
      }
    }
  }

  for(ll i = 1; i < cnt.size(); i++) cout << cnt[i] << " ";
  return 0;
}