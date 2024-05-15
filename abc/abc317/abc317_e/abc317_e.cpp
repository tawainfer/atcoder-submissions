#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int h, w;
vector<int> my = {-1, 0, 1, 0};
vector<int> mx = {0, 1, 0, -1};
vector<char> ptn = {'^', '>', 'v', '<'};

void fill_block(int cy, int cx, int dir, vector<vector<char>> &f, vector<vector<bool>> &seen) {
  int ey = cy + my[dir];
  int ex = cx + mx[dir];
  if(0 <= ey && ey < h && 0 <= ex && ex < w && f[ey][ex] == '.') {
    seen[ey][ex] = true;
    fill_block(ey, ex, dir, f, seen);
  }
}

int main() {
  cin >> h >> w;

  vector<vector<char>> f(h, vector<char>(w));
  vector<vector<bool>> seen(h, vector<bool>(w, false));
  int sy, sx, gy, gx;

  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> f[i][j];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
    if(f[i][j] == '#') {
      seen[i][j] = true;
    } else if(f[i][j] == 'S') {
      sy = i;
      sx = j;
    } else if(f[i][j] == 'G') {
      gy = i;
      gx = j;
    } else {
      for(int k = 0; k < 4; k++) {
        if(f[i][j] == ptn[k]) {
          seen[i][j] = true;
          fill_block(i, j, k, f, seen);
        }
      }
    }
  }

  vector<vector<int>> cnt(h, vector<int>(w, -1));
  cnt[sy][sx] = 0;
  queue<pair<int, int>> q;
  q.push(make_pair(sy, sx));

  while(!q.empty()) {
    int cy = q.front().first;
    int cx = q.front().second;
    q.pop();

    for(int i = 0; i < 4; i++) {
      int ey = cy + my[i];
      int ex = cx + mx[i];
      if(0 <= ey && ey < h && 0 <= ex && ex < w && !seen[ey][ex]) {
        seen[ey][ex] = true;
        cnt[ey][ex] = cnt[cy][cx] + 1;
        q.push(make_pair(ey, ex));
      }
    }
  }

  cout << cnt[gy][gx];
  return 0;
}