#include <bits/stdc++.h>
using namespace std;

int h, w;
vector<int> dy = {0, 1};
vector<int> dx = {1, 0};
bool seen[9][9];
bool s[9][9];
bool ans = false;

void dfs(int y, int x, bool s[9][9]) {
  for (int i = 0; i < 2; i++) {
    int yy = y + dy[i];
    int xx = x + dx[i];

    if (0 <= yy && yy < h && 0 <= xx && xx < w) {
      if (!s[yy][xx]) {
        s[yy][xx] = true;
        dfs(yy, xx, s);
        s[yy][xx] = false;
      }
    }
  }

  bool b = true;
  for (int k = 0; k < h; k++) {
    for (int l = 0; l < w; l++) {
      if (!s[k][l]) b = false;
      // cout << (s[k][l] ? "1 " : "0 ");
    }
    // cout << endl;
  }
  // cout << endl;

  if (b) ans = true;
}

int main() {
  cin >> h >> w;

  char c[h][w];
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
      if (c[i][j] == '.') seen[i][j] = true;
    }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      for (int k = 0; k < h; k++)
        for (int l = 0; l < w; l++) s[k][l] = seen[k][l];
      s[i][j] = true;
      if (c[i][j] == '#') dfs(i, j, s);
    }
  }

  cout << (ans ? "Possible" : "Impossible");
  return 0;
}