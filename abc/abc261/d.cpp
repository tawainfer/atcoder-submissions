// https://atcoder.jp/contests/abc261/submissions/33469286

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, m;
  cin >> n >> m;

  vector<ll> x(n + 1);
  reps(i, 1, n) cin >> x[i];

  vector<ll> bonus(5009, 0);
  ll c, y;
  while(cin >> c >> y) bonus[c] = y;

  ll dp[5009][5009]; // i, cnt
  rep(i, 0, 5009) rep(j, 0, 5009) dp[i][j] = 0;

  ll ma = -1e9;
  reps(i, 1, n) {
    ll m = -1e9;

    reps(cnt, 0, i) {
      if(i == 1) {
        if(cnt == 1) dp[1][1] = x[1];
      } else {
        if(cnt == 0) dp[i][0] = ma;
        else dp[i][cnt] = dp[i - 1][cnt - 1] + x[i];
      }
      
      dp[i][cnt] += bonus[cnt];
      m = max(m, dp[i][cnt]);
    }

    ma = max(ma, m);
  }

  cout << ma;
  return 0;
}
