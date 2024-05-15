#include <bits/stdc++.h>
using namespace std;

int h, w;
int ans = -1;
vector<int> my = {-1, 0, 1, 0};
vector<int> mx = {0, 1, 0, -1};

void dfs(int sy, int sx, int cy, int cx, int cnt, bool init, vector<vector<bool>> b) {
  if (!init && sy == cy && sx == cx) {
    if(cnt >= 3) ans = max(ans, cnt);
    return;
  }

  if (init) init = false;
  for (int i = 0; i < 4; i++) {
    int ey = cy + my[i];
    int ex = cx + mx[i];

    if (!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
    if (!b[ey][ex]) {
      b[ey][ex] = true;
      dfs(sy, sx, ey, ex, cnt + 1, init, b);
    }
  }
}

int main() {
  cin >> h >> w;

  char c[h][w];
  bool base[h][w];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
      base[i][j] = (c[i][j] == '#' ? true : false);
    }
  }

  vector<vector<bool>> b(h, vector<bool>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      for (int k = 0; k < h; k++) {
        for (int l = 0; l < w; l++) {
          b[k][l] = base[k][l];
        }
      }

      dfs(i, j, i, j, 0, true, b);
    }
  }

  cout << ans;
  return 0;
}