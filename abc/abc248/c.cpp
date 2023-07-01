// https://atcoder.jp/contests/abc248/submissions/31132751

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
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
    
    ll mod = 998244353;
    int n, m, k;
    cin >> n >> m >> k;

    ll dp[59][5009];
    dp[0][0] = 1;
    rep(i, n) rep(sum, k + 1) reps(next, m) dp[i + 1][sum + next] += dp[i][sum] % mod;

    ll ans = 0;
    for(int i = n; i <= k; i++) {
      ans += dp[n][i];
      ans %= mod;
    }
    cout << ans;
}
