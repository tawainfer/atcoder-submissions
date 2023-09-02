// https://atcoder.jp/contests/abc318/submissions/45205163

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(deque<ll> ptn, ll n, ll m, ll &ans, map<pair<ll, ll>, ll> &cost, int ignore) {
  if(ptn.size() == m) {
    ll score = 0;
    while(ptn.size() >= 2) {
      score += cost[make_pair(ptn[0], ptn[1])];
      for(int _ = 0; _ < 2; _++) ptn.pop_front();
    }
    
    ans = max(ans, score);
    return;
  }

  for(int i = 1; i <= n; i++) {
    if(i == ignore) continue;

    bool check = true;
    for(ll x : ptn) {
      if(i == x) {
        check = false;
        break;
      }
    }

    if(check) {
      ptn.push_back(i);
      dfs(ptn, n, m, ans, cost, ignore);
      ptn.pop_back();
      if(ptn.size() % 2 == 0) break;
    }
  }
}

int main() {
  ll n;
  cin >> n;

  map<pair<ll, ll>, ll> cost;
  for(int i = 1; i < n; i++) {
    for(int j = i + 1; j <= n; j++) {
      int d;
      cin >> d;
      cost[make_pair(i, j)] = d;
    }
  }

  ll ans = 0;
  if(n % 2 == 0) {
    dfs(deque<ll>(), n, n, ans, cost, -1);
  } else {
    for(int i = 1; i < n; i++) {
      dfs(deque<ll>(), n, n - 1, ans, cost, i);
    }
  }

  cout << ans;
  return 0;
}
