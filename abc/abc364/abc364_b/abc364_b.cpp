#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  int sy, sx;
  cin >> sy >> sx;
  sy--;
  sx--;

  vector<vector<char>> f(h, vector<char>(w));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
    }
  }

  string x;
  cin >> x;

  for(auto c : x) {
    int ey = sy;
    int ex = sx;
    if(c == 'U') {
      ey--;
    } else if(c == 'D') {
      ey++;
    } else if(c == 'L') {
      ex--;
    } else if(c == 'R') {
      ex++;
    }

    if(!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
    if(f[ey][ex] == '#') continue;
    sy = ey;
    sx = ex;
  }

  cout << sy + 1 << " " << sx + 1 << endl;
}