#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b, c) for(int i = a; i < b; i += c)
#define reps(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrep(i, a, b, c) for(int i = a; i > b; i -= c)
#define rreps(i, a, b, c) for(int i = a; i >= b; i -= c)
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int h, w;
char c[109][109];
int cntc[109][109] = {0};
int y = 0, x = 0, cnt = 1;

void dfs(int y, int x, int cnt) {
  cntc[y][x] = cnt;

  if(y + 1 != h) {
    if(c[y + 1][x] == '.') {
      cnt++;
      if(cnt > cntc[y + 1][x]) dfs(y + 1, x, cnt);
      cnt--;
    }
  }

  if(x + 1 != w) {
    if(c[y][x + 1] == '.') {
      cnt++;
      if(cnt > cntc[y][x + 1]) dfs(y, x + 1, cnt);
      cnt--;
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> h >> w;
  rep(i, 0, h, 1) rep(j, 0, w, 1) cin >> c[i][j];

  dfs(y, x, cnt);

  int ans = 0;
  rep(i, 0, 109, 1) rep(j, 0, 109, 1) ans = max(ans, cntc[i][j]);
  cout << ans << "\n";
}