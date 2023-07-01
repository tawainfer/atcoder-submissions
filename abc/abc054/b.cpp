// https://atcoder.jp/contests/abc054/submissions/33561687

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

  bool ans = false;
  ll n, m;
  cin >> n >> m;

  char a[n][n], b[m][m];
  rep(i, 0, n) rep(j, 0, n) cin >> a[i][j];
  rep(i, 0, m) rep(j, 0, m) cin >> b[i][j];

  if(n == 1 && m == 1) {
    cout << (a[0][0] == b[0][0] ? "Yes" : "No");
    return 0;
  }

  ll o = n - m;
  rep(i, 0, o) {
    rep(j, 0, o) {
      bool judge = true;
      rep(k, 0, m) {
        rep(l, 0, m) {
          if(a[i + k][j + l] != b[k][l]) judge = false;
        }
      }
      if(judge) ans = true;
    }
  }

  cout << (ans ? "Yes" : "No");
  return 0;
}
