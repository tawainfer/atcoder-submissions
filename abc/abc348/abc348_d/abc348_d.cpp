#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int h, w;
  cin >> h >> w;

  int sy, sx, gy, gx;
  vector<vector<char>> f(h, vector<char>(w));
  vector<vector<int>> med(h, vector<int>(w, -INF));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
      if(f[i][j] == 'S') {
        sy = i;
        sx = j;
      } else if(f[i][j] == 'T') {
        gy = i;
        gx = j;
      }
    }
  }

  int n;
  cin >> n;

  vector<int> r(n), c(n), e(n);
  for(int i = 0; i < n; i++) {
    cin >> r[i] >> c[i] >> e[i];
    r[i]--;
    c[i]--;
    med[r[i]][c[i]] = e[i];
  }

  if(med[sy][sx] == -INF) {
    cout << "No";
    return 0;
  }

  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  vector<vector<int>> energy(h, vector<int>(w, -INF));
  energy[sy][sx] = med[sy][sx];
  queue<vector<int>> q;
  q.push({med[sy][sx], sy, sx});

  while(!q.empty()) {
    int cc = q.front()[0];
    int cy = q.front()[1];
    int cx = q.front()[2];
    q.pop();
    if(energy[cy][cx] > cc) continue;

    for(int j = 0; j < 4; j++) {
      int ey = cy + my[j];
      int ex = cx + mx[j];
      if(!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
      if(f[ey][ex] == '#') continue;
      if(cc == 0) continue;
      int ec = max(cc - 1, med[ey][ex]);
      if(ec <= energy[ey][ex]) continue;
      energy[ey][ex] = ec;
      q.push({ec, ey, ex});
    }
  }

  cout << (energy[gy][gx] >= 0 ? "Yes" : "No");
}