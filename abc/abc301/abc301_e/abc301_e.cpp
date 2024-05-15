#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9;

int main() {
  int h, w, t;
  cin >> h >> w >> t;

  pair<int, int> start, goal;
  vector<pair<int, int>> sweets;
  map<pair<int, int>, int> pos_to_idx;
  char a[h][w];

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> a[i][j];
      if(a[i][j] == 'S') start = make_pair(i, j);
      if(a[i][j] == 'G') goal = make_pair(i, j);
      if(a[i][j] == 'o') {
        sweets.push_back(make_pair(i, j));
        pos_to_idx[make_pair(i, j)] = (int)sweets.size() - 1;
      }
    }
  }

  int n = sweets.size();
  int move_cost[n + 1][n + 1]; // sweets + start, sweets + goal
  for(int i = 0; i < n + 1; i++) for(int j = 0; j < n + 1; j++) move_cost[i][j] = -1;
  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  for(int k = 0; k <= n; k++) {
    queue<pair<int, int>> q;
    if(k == n) q.push(start);
    else q.push(sweets[k]);

    int cnt[h][w];
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cnt[i][j] = -1;
    cnt[q.front().first][q.front().second] = 0;

    while(!q.empty()) {
      int cy = q.front().first;
      int cx = q.front().second;
      q.pop();

      for(int i = 0; i < 4; i++) {
        int ey = cy + my[i];
        int ex = cx + mx[i];
        if(!(0 <= ey && ey < h && 0 <= ex && ex < w) || a[ey][ex] == '#' || cnt[ey][ex] != -1) continue;

        cnt[ey][ex] = cnt[cy][cx] + 1;
        q.push(make_pair(ey, ex));

        if(a[ey][ex] == 'o') move_cost[k][pos_to_idx[make_pair(ey, ex)]] = cnt[ey][ex];
        if(a[ey][ex] == 'G') move_cost[k][n] = cnt[ey][ex];
      }
    }
  }

  if(move_cost[n][n] > t || move_cost[n][n] == -1) {
    cout << -1;
    return 0;
  }

  int dp[(1 << (n + 2))][n + 2];
  for(int i = 0; i < (1 << (n + 1)); i++) for(int j = 0; j < n + 1; j++) dp[i][j] = INF;
  for(int i = 0; i < n; i++) if(move_cost[n][i] != -1) dp[(1 << i)][i] = move_cost[n][i];

  int ans = 0;
  for(int i = 1; i < (1 << (n + 1)); i++) {
    for(int j = 0; j <= n; j++) {
      if(dp[i][j] == INF) continue;

      for(int k = 0; k <= n; k++) {
        if(i & (1 << k) || move_cost[j][k] == -1) continue;

        dp[i + (1 << k)][k] = min(dp[i + (1 << k)][k], dp[i][j] + move_cost[j][k]);

        if(k == n) {
          int cnt = 0;
          for(int l = 0; l < n; l++) if((i + (1 << k)) & (1 << l)) cnt++;
          if(dp[i + (1 << k)][k] <= t) ans = max(ans, cnt);
        }
      }
    }
  }

  cout << ans;
  return 0;
}