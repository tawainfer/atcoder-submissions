#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 2e18;

ll op(ll a, ll b) {
  return max(a, b);
}

ll e() {
  return -INF;
}

int main() {
  ll w, n;
  cin >> w >> n;

  vector<ll> l(n + 1), r(n + 1), v(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> l[i] >> r[i] >> v[i];
  }

  vector<segtree<ll, op, e>> dp;
  for(int i = 0; i <= n; i++) {
    dp.push_back(segtree<ll, op, e>(w + 1));
  }
  dp[0].set(0, 0);

  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= w; j++) {
      dp[i].set(
        j,
        max(
          dp[i - 1].prod(max(j - r[i], 0LL), max(j - l[i] + 1, 0LL)) + v[i],
          dp[i - 1].get(j)
        )
      );
    }
  }

  ll ans = -INF;
  for(int i = 0; i <= n; i++) {
    ans = max(dp[i].get(w), ans);
  }
  cout << (ans >= 0 ? ans : -1);
}