#include <bits/stdc++.h>
using namespace std;

int h, w;
char c[109][109];
vector<int> my = {-1, -1, 1, 1};
vector<int> mx = {-1, 1, -1, 1};

int bfs(deque<pair<int, int>>& v, int &cnt) {
  if(v.size() == 1) {
    int cy = v[0].first;
    int cx = v[0].second;
    
    for(int i = 0; i < 4; i++) {
      int ey = cy + my[i];
      int ex = cx + mx[i];

      if(0 <= ey && ey < h && 0 <= ex && ex < w) {
        if(c[ey][ex] == '#') v.push_back(make_pair(ey, ex));
      }
    }

    v.pop_front();
    if(v.size() != 4) return cnt;
    cnt++;
    return bfs(v, cnt);
  } else {
    for(int k = 0; k < 4; k++) {
      int cy = v[k].first;
      int cx = v[k].second;

      int ey = cy + my[k];
      int ex = cx + mx[k];

      if(0 <= ey && ey < h && 0 <= ex && ex < w) {
        if(c[ey][ex] == '#') v.push_back(make_pair(ey, ex));
      }

    }

    for(int i = 0; i < 4; i++) v.pop_front();
    if(v.size() != 4) return cnt;
    cnt++;
    return bfs(v, cnt);
  }
}

int main() {
  cin >> h >> w;

  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> c[i][j];

  int n = min(h, w);

  vector<int> ans(109, 0);
  deque<pair<int, int>> tmp;
  int cnt;

  for(int i = 1; i < h - 1; i++) {
    for(int j = 1; j < w - 1; j++) {
      if(c[i][j] == '.') continue;
      tmp.clear();
      tmp.push_back(make_pair(i, j));
      cnt = 0;
      ans[bfs(tmp, cnt)]++;
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
}