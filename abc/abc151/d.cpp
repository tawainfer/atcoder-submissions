// https://atcoder.jp/contests/abc151/submissions/39486107

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  char c[h][w];
  bool base[h][w];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
    cin >> c[i][j];
    base[i][j] = (c[i][j] == '#' ? true : false);
  }

  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  int ans = 0;
  for(int sy = 0; sy < h; sy++) for(int sx = 0; sx < w; sx++) {
    for(int gy = 0; gy < h; gy++) for(int gx = 0; gx < w; gx++) {
      if(sy == gy && sx == gx) continue;
      if(c[sy][sx] == '#' || c[gy][gx] == '#') continue;

      queue<pair<int, int>> q;
      q.push(make_pair(sy, sx));

      int b[h][w];
      for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
        b[i][j] = -1;
      }

      b[sy][sx] = 0;
      while(!q.empty()) {
        int cy = q.front().first;
        int cx = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
          int ey = cy + my[i];
          int ex = cx + mx[i];

          if(!(0 <= ey && ey < h && 0 <= ex && ex < w) || c[ey][ex] == '#') continue;
          if(b[ey][ex] == -1) {
            b[ey][ex] = b[cy][cx] + 1;
            q.push(make_pair(ey, ex));
          }
        }
      }

      ans = max(b[gy][gx], ans);
    }
  }

  cout << ans;
  return 0;
}
