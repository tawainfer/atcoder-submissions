// https://atcoder.jp/contests/abc264/submissions/33991960

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

  ll r, c;
  cin >> r >> c;
  r--;
  c--;

  bool b[15][15];
  rep(i, 0, 15) rep(j, 0, 15) b[i][j] = true;

  reps(i, 1, 13) b[1][i] = false;
  reps(i, 1, 13) b[13][i] = false;
  reps(i, 3, 11) b[3][i] = false;
  reps(i, 3, 11) b[11][i] = false;
  reps(i, 5, 9) b[5][i] = false;
  reps(i, 5, 9) b[9][i] = false;
  b[7][7] = false;

  reps(i, 1, 13) b[i][1] = false;
  reps(i, 1, 13) b[i][13] = false;
  reps(i, 3, 11) b[i][3] = false;
  reps(i, 3, 11) b[i][11] = false;
  reps(i, 5, 9) b[i][5] = false;
  reps(i, 5, 9) b[i][9] = false;

  cout << (b[r][c] ? "black" : "white");
  return 0;
}
