#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n), x(n);
  for(int i = 1; i <= n - 1; i++) {
    int aa, bb, xx;
    cin >> aa >> bb >> xx;
    a[i] = aa;
    b[i] = bb;
    x[i] = xx;
  }

  vector<ll> dp(n + 1, INF);
  dp[1] = 0;

  vector<vector<pair<ll, ll>>> g(n + 1);
  vector<ll> in(n + 1, 0);
  for(int i = 1; i <= n - 1; i++) {
    g[i].push_back(make_pair(x[i], b[i]));
    in[x[i]]++;
    g[i].push_back(make_pair(i + 1, a[i]));
    in[i + 1]++;
  }

  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
  q.push(make_pair(dp[1], 1));

  while(!q.empty()) {
    ll cc = q.top().first;
    ll cp = q.top().second;
    q.pop();
    if(dp[cp] < cc) continue;

    for(auto p : g[cp]) {
      ll ep = p.first;
      ll ec = p.second;

      if(dp[cp] + ec < dp[ep]) {
        dp[ep] = dp[cp] + ec;
        q.push(make_pair(dp[ep], ep));
      }
    }
  }

  cout << dp[n];
}