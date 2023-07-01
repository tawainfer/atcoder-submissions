// https://atcoder.jp/contests/abc266/submissions/34388738

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;

  ll t[100009][5];
  rep(i, 0, 100009) rep(j, 0, 5) t[i][j] = 0;
  ll b, y, a;
  ll last = -1e18;

  rep(i, 0, n) {
    cin >> b >> y >> a;
    t[b][y] = a;
    chmax(last, b);
  }

  ll dp[100009][5];
  rep(i, 0, 100009) rep(j, 0, 5) dp[i][j] = 0;

  reps(i, 1, last) {
    ll x;
    lower(x);

    if(i == 1) {
      dp[1][0] = dp[0][0] + t[1][0];
      dp[1][1] = dp[0][0] + t[1][1];
    } else if(i == 2) {
      dp[2][0] = max(dp[1][0] + t[2][0], dp[1][1] + t[2][0]);
      dp[2][1] = max(dp[1][0] + t[2][1], dp[1][1] + t[2][1]);
      dp[2][2] = dp[1][1] + t[2][2];
    } else if(i == 3) {
      dp[3][0] = max(dp[2][0] + t[3][0], dp[2][1] + t[3][0]);
      dp[3][1] =
        max(dp[2][0] + t[3][1], max(dp[2][1] + t[3][1], dp[2][2] + t[3][1]));
      dp[3][2] = max(dp[2][1] + t[3][2], dp[2][2] + t[3][2]);
      dp[3][3] = dp[2][2] + t[3][3];
    } else {
      reps(j, 0, 4) {
        if(j == 0) {
          dp[i][0] = max(dp[i - 1][0] + t[i][0], dp[i - 1][1] + t[i][0]);
        } else if(j == 1) {
          dp[i][1] = max(dp[i - 1][0] + t[i][1],
            max(dp[i - 1][1] + t[i][1], dp[i - 1][2] + t[i][1]));
        } else if(j == 2) {
          dp[i][2] = max(dp[i - 1][1] + t[i][2],
            max(dp[i - 1][2] + t[i][2], dp[i - 1][3] + t[i][2]));
        } else if(j == 3) {
          dp[i][3] = max(dp[i - 1][2] + t[i][3],
            max(dp[i - 1][3] + t[i][3], dp[i - 1][4] + t[i][3]));
        } else {
          dp[i][4] = max(dp[i - 1][3] + t[i][4], dp[i - 1][4] + t[i][4]);
        }
      }
    }
  }

  ll ans = -1e18;
  reps(i, 0, 4) {
    ll sum = dp[last][i];
    chmax(ans, sum);
  }

  cout << ans;
  return 0;
}
