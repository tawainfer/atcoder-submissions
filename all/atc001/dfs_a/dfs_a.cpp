#include <bits/stdc++.h>
using namespace std;

int h, w;
bool ans = false;
bool seen[509][509];
char c[509][509];
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

void dfs(int y, int x) {
  for(int i = 0; i < 4; i++) {
    int yy = y + dy[i];
    int xx = x + dx[i];

    if(0 <= yy && yy < h && 0 <= xx && xx < w) {
      if(!seen[yy][xx]) {
        if(c[yy][xx] == 'g') ans = true;
        seen[yy][xx] = true;
        dfs(yy, xx);
      }
    }
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  cin >> h >> w;

  int sy, sx, gy, gx;
  for(int i = 0; i < h; i++)
    for(int j = 0; j < w; j++) {
      cin >> c[i][j];
      if(c[i][j] == 's') {
        sy = i;
        sx = j;
        seen[i][j] = false;
      } else if(c[i][j] == 'g') {
        gy = i;
        gx = j;
        seen[i][j] = false;
      } else if(c[i][j] == '.') {
        seen[i][j] = false;
      } else {
        seen[i][j] = true;
      }
    }

  dfs(sy, sx);

  if(ans) cout << "Yes";
  else cout << "No";
  return 0;
}