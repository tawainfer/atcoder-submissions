#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, y, x;
  cin >> h >> w >> y >> x;
  y--;
  x--;

  vector<vector<char>> f(h, vector<char>(w));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
    }
  }

  string t;
  cin >> t;

  vector<char> dc = {'U', 'R', 'D', 'L'};
  vector<int> dy = {-1, 0, 1, 0};
  vector<int> dx = {0, 1, 0, -1};

  set<pair<int, int>> se;
  for(char c : t) {
    int ey = y;
    int ex = x;
    for(int i = 0; i < 4; i++) {
      if(dc[i] == c) {
        ey += dy[i];
        ex += dx[i];
      }
    }

    if(ey < 0 || ey >= h || ex < 0 || ex >= w) continue;
    if(f[ey][ex] == '#') continue;
    
    if(f[ey][ex] == '@') {
      se.insert(make_pair(ey, ex));
    }

    y = ey;
    x = ex;
  }

  cout << y + 1 << " " << x + 1 << " " << se.size();
}