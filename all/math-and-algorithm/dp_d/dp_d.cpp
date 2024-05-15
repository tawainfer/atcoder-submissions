#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
#define y0 y20210831 // Hello, World
#define y1 y20220320 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, W;
  cin >> n >> W;
  ll w[109], v[109];
  reps(i, n) cin >> w[i] >> v[i];

  ll dp[109][100009];
  rep(i, 100009) dp[0][i] = 0;
  rep(i, 100009) dp[1][i] = 0;

  dp[1][w[1]] = v[1];

  for(int i = 2; i <= n; i++) {
    rep(j, W + 1) {
      if(j >= w[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
      else dp[i][j] = dp[i-1][j];
    }
  }

  ll ans = 0;
  rep(i, W + 1) ans = max(ans, dp[n][i]);
  cout << ans;
}