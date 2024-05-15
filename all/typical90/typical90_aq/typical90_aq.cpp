#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  int sy, sx, gy, gx;
  cin >> sy >> sx >> gy >> gx;

  char c[h + 1][w + 1];
  int seen[h + 1][w + 1][4];
  for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) {
    cin >> c[i][j];
    for(int k = 0; k < 4; k++) seen[i][j][k] = (i == sy && j == sx ? 0 : 2e9);
  }

  deque<pair<int, int>> d;
  d.push_back(make_pair(sy, sx));

  int cy, cx, ey, ex;
  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  while(!d.empty()) {
    cy = d.front().first;
    cx = d.front().second;
    d.pop_front();

    for(int i = 0; i < 4; i++) {
      ey = cy + my[i];
      ex = cx + mx[i];
      if(!(0 < ey && ey <= h && 0 < ex && ex <= w) || c[ey][ex] == '#') continue;

      for(int j = 0; j < 4; j++) {
        if(i == j) {
          if(seen[cy][cx][j] < seen[ey][ex][i]) {
            seen[ey][ex][i] = seen[cy][cx][j];
            d.push_front(make_pair(ey, ex));
          }
        } else {
          if(seen[cy][cx][j] + 1 < seen[ey][ex][i]) {
            seen[ey][ex][i] = seen[cy][cx][j] + 1;
            d.push_back(make_pair(ey, ex));
          }
        }
      }
    }
  }

  int ans = 2e9;
  for(auto &z : seen[gy][gx]) ans = min(ans, z);

  cout << ans;
  return 0;
}