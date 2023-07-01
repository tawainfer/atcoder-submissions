// https://atcoder.jp/contests/abc286/submissions/41619502

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n + 1);
  for(ll i = 1; i <= n; i++) cin >> a[i];

  set<ll> g[309];
  char c;

  for(ll i = 1; i <= n; i++) {
    for(ll j = 1; j <= n; j++) {
      cin >> c;
      if(c == 'Y') {
        g[i].insert(j);
        // g[j].insert(i);
      }
    }
  }

  pair<ll, ll> ans[309][309]; // min_cnt, max_sum
  for(ll i = 0; i < 309; i++) {
    for(ll j = 0; j < 309; j++) {
      ans[i][j] = make_pair(INF, -INF);
    }
  }

  for(ll i = 1; i <= n; i++) {
    queue<pair<ll, pair<ll, ll>>> q; // pos, min_cnt, max_sum
    q.push(make_pair(i, make_pair(0, a[i])));

    while(!q.empty()) {
      ll cp = q.front().first;
      ll cc = q.front().second.first;
      ll cs = q.front().second.second;
      q.pop();

      if(ans[i][cp].first < cc) continue;
      if(ans[i][cp].first == cc && cs < ans[i][cp].second) continue;

      for(auto ep : g[cp]) {
        if(ans[i][ep].first < (cc + 1)) continue;
        if(ans[i][ep].first == (cc + 1) && (cs + a[ep]) < ans[i][ep].second) continue;

        ans[i][ep] = make_pair(cc + 1, cs + a[ep]);
        q.push(make_pair(ep, make_pair(cc + 1, cs + a[ep])));
      }
    }
  }

  // for(ll i = 1; i <= n; i++) {
  //   for(ll j = 1; j <= n; j++) {
  //     cout << "(" << ans[i][j].first << ", " << ans[i][j].second << ") ";
  //   }
  //   cout << endl;
  // }

  ll q;
  cin >> q;

  ll u, v;
  for(ll i = 0; i < q; i++) {
    cin >> u >> v;
    if(ans[u][v].first == INF) cout << "Impossible" << endl;
    else cout << ans[u][v].first << " " << ans[u][v].second << endl;
  }
}
