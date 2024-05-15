#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define ll long long
#define nextp next_permutation
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
#define ull unsigned ll
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }

/*

  @tawainfer

  2021-09-04 Gray
  2022-03-19 Brown
  2022-08-27 Green

  ξ(･_･)ξ I'll do my best! ξ(･_･)ξ

*/

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  int g[3];
  rep(i, 0, 3) cin >> g[i];

  int dp[309][3];
  rep(i, 0, 309) rep(j, 0, 3) dp[i][j] = 0;
  rep(i, n + 1, 309) rep(j, 0, 3) dp[i][j] = -1;
  rep(i, 0, 3) rep(j, 0, 3) dp[g[i]][j] = -1;

  rreps(i, n - 1, 0) {
    bool b = false;
    rep(j, 0, 3) if(g[j] == i) b = true;
    if(b) {
      rep(j, 0, 3) dp[i][j] = -1;
      continue;
    }

    rep(j, 0, 3) {
      int mi = 1e9;

      reps(k, 1, 3) if(i + k <= n && dp[i + k][j] != -1) {
        int x = dp[i + k][j];
        chmin(mi, x);
      }

      dp[i][j] = (mi == 1e9 ? -1 : mi + 1);
      //cout << i << " " << j << " " << dp[i][j] << endl;
    }
  }

  bool ans = false;
  rep(i, 0, 3) if(0 < dp[0][i] && dp[0][i] <= 100) ans = true;
  cout << (ans ? "YES\n" : "NO\n");
  return 0;
}