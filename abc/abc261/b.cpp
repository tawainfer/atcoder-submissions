// https://atcoder.jp/contests/abc261/submissions/33441322

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

  int n;
  cin >> n;

  char a[n][n];
  rep(i, 0, n) rep(j, 0, n) cin >> a[i][j];

  bool judge = true;
  rep(i, 0, n) {
    rep(j, 0, n) {
      if(i != j) {
        if((a[i][j] == 'W') && (a[j][i] != 'L')) judge = false;
        if((a[i][j] == 'L') && (a[j][i] != 'W')) judge = false;
        if((a[i][j] == 'D') && (a[j][i] != 'D')) judge = false;
      }
    }
  }

  cout << (judge ? "correct" : "incorrect");
  return 0;
}
