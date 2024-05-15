#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  vector<vector<char>> f(h, vector<char>(w));
  vector<vector<bool>> seen(h, vector<bool>(w, false));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(f[i][j] == '#') {
        seen[i][j] = true;
        for(int k = 0; k < 4; k++) {
          int y = i + my[k];
          int x = j + mx[k];
          if(!(0 <= y && y < h && 0 <= x && x < w)) continue;
          if(f[y][x] != '#') f[y][x] = '!';
        }
      }
    }
  }

  vector<vector<int>> ptn;
  vector<pair<int, int>> stop;

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(seen[i][j]) continue;
      seen[i][j] = true;

      queue<pair<int, int>> q;
      q.push(make_pair(i, j));

      int cnt = 1;
      while(!q.empty()) {
        int cy = q.front().first;
        int cx = q.front().second;
        q.pop();

        if(f[cy][cx] == '!') {
          stop.push_back(make_pair(cy, cx));
          continue;
        }

        for(int k = 0; k < 4; k++) {
          int ey = cy + my[k];
          int ex = cx + mx[k];
          if(!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
          if(seen[ey][ex]) continue;

          seen[ey][ex] = true;
          cnt++;
          q.push(make_pair(ey, ex));
        }
      }

      ptn.push_back({cnt, i, j});
      while(!stop.empty()) {
        seen[stop.back().first][stop.back().second] = false;
        stop.pop_back();
      }
    }
  }

  sort(ptn.begin(), ptn.end());
  reverse(ptn.begin(), ptn.end());
  cout << ptn[0][0];
}