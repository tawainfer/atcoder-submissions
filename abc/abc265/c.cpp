// https://atcoder.jp/contests/abc265/submissions/34224592

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned int
#define ushort unsigned short
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
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
using namespace std;

ll h, w;
char g[509][509];
bool seen[509][509];

void dfs(ll y, ll x) {
  seen[y][x] = true;

  ll xx = x, yy = y;
  if(g[y][x] == 'U') yy--;
  if(g[y][x] == 'D') yy++;
  if(g[y][x] == 'L') xx--;
  if(g[y][x] == 'R') xx++;
  // cout << x << " " << y << " " << xx << " " << yy << " " << g[yy][xx] << " " << g[yy][xx] << endl;

  if(xx < 0 || w <= xx || yy < 0 || h <= yy) {
    cout << y + 1 << " " << x + 1;
    return;
  } else if(seen[yy][xx]) {
    cout << -1;
    return;
  } else dfs(yy, xx);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  cin >> h >> w;
  rep(i, 0, h) rep(j, 0, w) cin >> g[i][j];
  rep(i, 0, h) rep(j, 0, w) seen[i][j] = false;

  dfs(0, 0);
}
