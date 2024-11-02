#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, k;
  cin >> h >> w >> k;

  vector<vector<char>> f(h, vector<char>(w));
  set<pair<int, int>> sp;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
      if(f[i][j] == '.') {
        sp.insert(make_pair(i, j));
      }
    }
  }

  int ans = 0;
  for(auto p : sp) {
    int sy = p.first;
    int sx = p.second;

    vector<int> dy = {-1, 0, 1, 0};
    vector<int> dx = {0, 1, 0, -1};
    vector<pair<int, int>> tmp;
    tmp.push_back(make_pair(sy, sx));
    queue<pair<pair<int, int>, vector<pair<int, int>>>> q;
    q.push(make_pair(make_pair(sy, sx), tmp));
    while(!q.empty()) {
      int cy = q.front().first.first;
      int cx = q.front().first.second;
      vector<pair<int, int>> seen = q.front().second;
      q.pop();

      if(seen.size() >= k + 1) {
        ans++;
        continue;
      }

      for(int i = 0; i < 4; i++) {
        int ey = cy + dy[i];
        int ex = cx + dx[i];
        if(ey < 0 || ey >= h || ex < 0 || ex >= w) continue;
        if(f[ey][ex] == '#') continue;

        if(find(seen.begin(), seen.end(), make_pair(ey, ex)) != seen.end()) continue;

        vector<pair<int, int>> new_seen = seen;
        new_seen.push_back(make_pair(ey, ex));
        q.push(make_pair(make_pair(ey, ex), new_seen));
      }
    }
  }

  cout << ans;
}
