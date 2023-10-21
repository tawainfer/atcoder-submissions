// https://atcoder.jp/contests/abc325/submissions/46803043

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> f(h, vector<char>(w));
  vector<vector<bool>> seen(h, vector<bool>(w, false));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
      if(f[i][j] == '.') {
        seen[i][j] = true;
      }
    }
  }

  int ans = 0;
  vector<int> my = {-1, -1, 0, 1, 1, 1, 0, -1};
  vector<int> mx = {0, 1, 1, 1, 0, -1, -1, -1};

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(seen[i][j]) continue;

      queue<pair<int, int>> q;
      q.push(make_pair(i, j));
      seen[i][j] = true;
      ans++;

      while(!q.empty()) {
        int cy = q.front().first;
        int cx = q.front().second;
        q.pop();

        for(int k = 0; k < 8; k++) {
          int ey = cy + my[k];
          int ex = cx + mx[k];
          if(!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;

          if(!seen[ey][ex]) {
            seen[ey][ex] = true;
            q.push(make_pair(ey, ex));
          }
        }
      }
    }
  }

  cout << ans;
}
