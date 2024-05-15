#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;

  vector<set<int>> g(n + 1);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }

  vector<bool> seen(n + 1, false);
  ll ans = 0;
  for(int i = 1; i <= n; i++) {
    if(seen[i]) continue;
    seen[i] = true;

    set<pair<int, int>> ptn;
    ll cnt = 0;
    queue<int> q;
    q.push(i);

    while(!q.empty()) {
      int cp = q.front();
      cnt++;
      q.pop();
      
      for(auto ep : g[cp]) {
        ptn.insert(make_pair(min(cp, ep), max(cp, ep)));
        if(seen[ep]) continue;
        seen[ep] = true;
        q.push(ep);
      }
    }

    if(cnt >= 3) {
      ans += cnt * (cnt - 1) / 2 - ptn.size();
    }
  }

  cout << ans;
}