// https://atcoder.jp/contests/abc348/submissions/52097131

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

  // 1
  vector<vector<int>> cost(h, vector<int>(w, INF));
  cost[gy][gx] = 0;
  priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
  q.push({0, gy, gx});

  while(!q.empty()) {
    int cc = q.top()[0];
    int cy = q.top()[1];
    int cx = q.top()[2];
    q.pop();
    if(cost[cy][cx] < cc) continue;

    for(int j = 0; j < 4; j++) {
      int ey = cy + my[j];
      int ex = cx + mx[j];
      if(!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
      if(f[ey][ex] == '#') continue;
      if(cc + 1 >= cost[ey][ex]) continue;
      cost[ey][ex] = cc + 1;
      q.push({cc + 1, ey, ex});
    }
  }

  // for(int j = 0; j < h; j++) {
  //   for(int k = 0; k < w; k++) {
  //     cout << (cost[j][k] == INF ? -1 : cost[j][k]) << " ";
  //   }
  //   cout << endl;
  // }

  vector<vector<int>> cost2(h, vector<int>(w, -INF));
  cost2[sy][sx] = med[sy][sx];
  priority_queue<vector<int>> q2;
  q2.push({med[sy][sx], sy, sx});

  while(!q2.empty()) {
    int cc = q2.top()[0];
    int cy = q2.top()[1];
    int cx = q2.top()[2];
    q2.pop();
    if(cost2[cy][cx] > cc) continue;

    for(int j = 0; j < 4; j++) {
      int ey = cy + my[j];
      int ex = cx + mx[j];
      if(!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
      if(f[ey][ex] == '#') continue;
      if(cc == 0) continue;
      // if(cost2[ey][ex] != INF) continue;
      int ec = max(cc - 1, med[ey][ex]);
      if(ec <= cost2[ey][ex]) continue;
      cost2[ey][ex] = ec;
      q2.push({ec, ey, ex});
    }
  }

  // for(int j = 0; j < h; j++) {
  //   for(int k = 0; k < w; k++) {
  //     cout << (cost2[j][k] == -INF ? -1 : cost2[j][k]) << " ";
  //   }
  //   cout << endl;
  // }

  for(int i = 0; i < n; i++) {
    if(cost[r[i]][c[i]] == INF) continue;
    if(cost2[r[i]][c[i]] == -INF) continue;

    if(cost2[r[i]][c[i]] >= cost[r[i]][c[i]]) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}
