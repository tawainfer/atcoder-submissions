#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> d(n + 1, INF);
  d[1] = 0;

  ll a, b, c;
  vector<vector<ll>> e;
  set<ll> g[n + 1];
  while(cin >> a >> b >> c) {
    e.push_back({a, b, -c});
    g[a].insert(b);
  }

  vector<bool> goal(n + 1, false);
  goal[1] = true;
  for(int i = 2; i < n; i++) {
    vector<bool> seen(n + 1, false);
    seen[i] = true;

    queue<int> q;
    q.push(i);

    while(!q.empty()) {
      int cp = q.front();
      q.pop();

      for(int ep : g[cp]) {
        if(!seen[ep]) {
          seen[ep] = true;
          q.push(ep);
        }
      }
    }

    if(seen[n]) goal[i] = true;
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(d[e[j][0]] + e[j][2] < d[e[j][1]]) {
        if(i == n - 1 && goal[e[j][1]]) {
          cout << "inf" << endl;
          return 0;
        }

        d[e[j][1]] = d[e[j][0]] + e[j][2];
      }
    }
  }

  cout << -d[n] << endl;
  return 0;
}