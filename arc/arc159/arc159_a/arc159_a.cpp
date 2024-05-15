#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 2e18;

int main() {
  ll n, k;
  cin >> n >> k;

  ll a[n][n];
  vector<ll> g[109];
  for(ll i = 0; i < n; i++) {
    for(ll j = 0; j < n; j++) {
      cin >> a[i][j];
      if(a[i][j] == 1) g[i].push_back(j);
      // cout << a[i][j] << " ";
    }
    // cout << endl;
  }

  ll q;
  cin >> q;
  // cout << q;

  ll s, t;
  while(cin >> s >> t) {
    // ll sy = (s - 1) / (n * k);
    // ll sx = (s - 1) % (n * k);
    // ll ty = (t - 1) / (n * k);
    // ll tx = (t - 1) % (n * k);

    s = (s - 1) % n;
    t = (t - 1) % n;
    // cout << s << " " << t << endl;

    if(s == t && a[s][t] == 1) {
      cout << "1\n";
      continue;
    }

    vector<ll> cnt(109, INF);
    cnt[s] = 0;

    queue<ll> q;
    q.push(s);

    bool init = (s == t ? true : false);
    while(!q.empty()) {
      ll cp = q.front();
      q.pop();

      for(ll ep : g[cp]) {
        if(cnt[ep] != INF) continue;
        cnt[ep] = cnt[cp] + 1;
        q.push(ep);
        // cout << cp << " " << ep << " " << cnt[ep] << endl;
      }

      if(init) {
        cnt[cp] = INF;
        init = false;
      }
    }

    cout << (cnt[t] == INF ? -1 : cnt[t]) << endl;
  }
}