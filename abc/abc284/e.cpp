// https://atcoder.jp/contests/abc284/submissions/37834307

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans = 1;
vector<bool> seen(200009, false);
vector<ll> g[200009];

void dfs(vector<ll> &v, set<ll> &s) {
  if(ans > 1000000) {
    return;
  }

  for (auto &z : g[v.back()]) {
    if (s.find(z) == s.end()) {
      ans++;
      // seen[z] = true;
      v.push_back(z);
      s.insert(z);
      dfs(v, s);
      s.erase(z);
      v.pop_back();
    }
  }
}

int main() {
  ll n, m;
  cin >> n >> m;

  ll u, v;
  while (cin >> u >> v) {
    g[v].push_back(u);
    g[u].push_back(v);
  }
  vector<ll> vec = {1};
  set<ll> se;
  se.insert(1);
  dfs(vec, se);

  cout << min(ans, 1000000LL);
}
