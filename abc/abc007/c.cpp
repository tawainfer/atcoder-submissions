// https://atcoder.jp/contests/abc007/submissions/37295794

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int a, b, sy, sx, gy, gx;
  cin >> a >> b >> sy >> sx >> gy >> gx;
  sy--;
  sx--;
  gy--;
  gx--;

  char c[a][b];
  int seen[a][b];
  for(int i = 0; i < a; i++) for(int j = 0; j < b; j++) {
    cin >> c[i][j];
    seen[i][j] = -1;
  }

  queue<pair<int, int>> q;
  seen[sy][sx] = 0;
  q.push(make_pair(sy, sx));

  vector<int> dy = {1, 0, -1, 0};
  vector<int> dx = {0, 1, 0, -1};

  while(!q.empty()) {
    int y = q.front().first;
    int x = q.front().second;
    q.pop();

    for(int i = 0; i < 4; i++) {
      int yy = y + dy[i];
      int xx = x + dx[i];

      if(0 <= yy && yy < a && 0 <= xx && xx < b) {
        if(c[yy][xx] == '.' && seen[yy][xx] == -1) {
          seen[yy][xx] = seen[y][x] + 1;
          q.push(make_pair(yy, xx));
        }
      }
    }
  }

  cout << seen[gy][gx] << "\n";
  return 0;
}
