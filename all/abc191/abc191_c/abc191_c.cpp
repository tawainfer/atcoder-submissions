#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> rotate_grid(vector<vector<char>> f) {
  int n = f[0].size();
  vector<vector<char>> res(n, vector<char>(n, '.'));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      res[j][n - i - 1] = f[i][j];
    }
  }

  return res;
}

int main() {
  int h, w;
  cin >> h >> w;
  int n = max(h, w);

  vector<vector<char>> f(n, vector<char>(n, '.'));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
    }
  }

  int ans = 0;
  bool b = false;
  for(int _ = 0; _ < 4; _++) {
    f = rotate_grid(f);

    for(int i = 0; i < n - 1; i++) {
      for(int j = 0; j < n; j++) {
        if(f[i][j] == '.' && f[i + 1][j] == '#') {
          if(!b) {
            b = true;
            ans++;
          }
        } else {
          b = false;
        }
      }
    }
  }

  cout << ans;
  return 0;
}