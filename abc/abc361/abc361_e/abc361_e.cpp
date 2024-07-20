#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<ll, ll> bfs(ll sp, ll &n, vector<set<ll>> &g, map<pair<ll, ll>, ll> &cost) {
  pair<ll, ll> mp;
  vector<bool> seen(n + 1, false);
  seen[sp] = true;
  queue<pair<ll, ll>> q;
  q.push(make_pair(0, sp));

  while(!q.empty()) {
    ll cc = q.front().first;
    ll cp = q.front().second;
    q.pop();

    for(auto ep : g[cp]) {
      if(seen[ep]) continue;
      seen[ep] = true;

      ll ec = cc + cost[make_pair(cp, ep)];
      q.push(make_pair(ec, ep));
      if(mp.first < ec) {
        mp = make_pair(ec, ep);
      }
    }
  }

  return mp;
}

int main() {
  ll n;
  cin >> n;

  vector<set<ll>> g(n + 1);
  map<pair<ll, ll>, ll> cost;
  ll sum = 0;

  for(int i = 0; i < n - 1; i++) {
    ll a, b, c;
    cin >> a >> b >> c;
    g[a].insert(b);
    g[b].insert(a);
    cost[make_pair(a, b)] = c;
    cost[make_pair(b, a)] = c;
    sum += c * 2;
  }

  cout << sum - bfs(bfs(1, n, g, cost).second, n, g, cost).first;
}