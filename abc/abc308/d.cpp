// https://atcoder.jp/contests/abc308/submissions/43167217

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  char c[h][w];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> c[i][j];

  if(c[0][0] != 's') {
    cout << "No";
    return 0;
  }

  vector<char> ptn = {'s', 'n', 'u', 'k', 'e'};
  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  int seen[509][509];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) seen[i][j] = -1;
  seen[0][0] = 0;

  queue<pair<int, int>> q;
  q.push(make_pair(0, 0));

  while(!q.empty()) {
    int cy = q.front().first;
    int cx = q.front().second;
    q.pop();

    for(int i = 0; i < 4; i++) {
      int ey = cy + my[i];
      int ex = cx + mx[i];
      if(!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
      if(seen[ey][ex] != -1) continue;

      if(c[ey][ex] == ptn[(seen[cy][cx] + 1) % 5]) {
        seen[ey][ex] = seen[cy][cx] + 1;
        q.push(make_pair(ey, ex));
      }
    }
  }

  cout << (seen[h - 1][w - 1] != -1 ? "Yes" : "No");
  return 0;
}
