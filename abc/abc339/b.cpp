// https://atcoder.jp/contests/abc339/submissions/49919572

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, n;
  cin >> h >> w >> n;

  vector<vector<char>> f(h, vector<char>(w, '.'));
  int cy = 0;
  int cx = 0;
  int dir = 0;
  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};
  
  for(int i = 0; i < n; i++) {
    if(f[cy][cx] == '.') {
      f[cy][cx] = '#';
      dir = (dir + 1) % 4;
    } else {
      f[cy][cx] = '.';
      dir = (dir - 1 + 4) % 4;
    }

    cy = (cy + my[dir] + h) % h;
    cx = (cx + mx[dir] + w) % w;
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << f[i][j];
    }
    cout << endl;
  }
}
