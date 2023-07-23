// https://atcoder.jp/contests/abc311/submissions/43891606

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> f(n, vector<char>(m));
  vector<vector<bool>> rock(n, vector<bool>(m, false));
  for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) {
    cin >> f[i][j];
    if(f[i][j] == '#') rock[i][j] = true;
  }
  
  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  set<pair<int, int>> seen;
  queue<pair<int, int>> q;
  q.push(make_pair(1, 1));

  vector<vector<bool>> through(n, vector<bool>(m, false));
  while(!q.empty()) {
    int cy = q.front().first;
    int cx = q.front().second;
    q.pop();
    
    if(seen.find(make_pair(cy, cx)) != seen.end()) continue;
    seen.insert(make_pair(cy, cx));

    for(int i = 0; i < 4; i++) {
      int ey = cy;
      int ex = cx;

      while(!rock[ey][ex]) {
        through[ey][ex] = true;
        ey += my[i];
        ex += mx[i];
      }

      ey -= my[i];
      ex -= mx[i];
      q.push(make_pair(ey, ex));
    }
  }

  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(through[i][j]) ans++;
    }
  }

  cout << ans;
  return 0;
}
