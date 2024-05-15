#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<vector<ll>> t;
  vector<vector<ll>> rg(n + 1);
  for(int i = 0; i < m; i++) {
    ll l, d, k, c, a, b;
    cin >> l >> d >> k >> c >> a >> b;
    t.push_back({l, d, k, c, a, b});
    rg[b].push_back(i);
  }

  vector<ll> ans(n + 1, -INF);
  vector<vector<pair<ll, ll>>> arrival(n + 1);

  priority_queue<pair<ll, ll>> q;
  q.push(make_pair(INF, n));

  while(!q.empty()) {
    ll ct = q.top().first;
    ll cp = q.top().second;
    q.pop();
    if(ct < ans[cp]) continue;

    for(auto i : rg[cp]) {
      ll ep = t[i][4];
      if(t[i][0] + t[i][3] > ct) continue;
      
      ll ok = 0;
      ll ng = t[i][2];
      while(ng - ok > 1) {
        ll mid = (ok + ng) / 2;
        if(t[i][0] + mid * t[i][1] + t[i][3] <= ct) {
          ok = mid;
        } else {
          ng = mid;
        }
      }
      arrival[cp].push_back(make_pair(t[i][0] + ok * t[i][1], i));
    }

    if(arrival[cp].size() == 0) continue;
    for(int i = arrival[cp].size() - 1; i >= 0; i--) {
      ll ep = t[arrival[cp][i].second][4];
      if(arrival[cp][i].first > ans[ep]) {
        ans[ep] = arrival[cp][i].first;
        q.push(make_pair(arrival[cp][i].first, ep));
      }
    }
  }

  for(int i = 1; i < n; i++) {
    cout << (ans[i] == -INF ? "Unreachable" : to_string(ans[i])) << endl;
  }
}