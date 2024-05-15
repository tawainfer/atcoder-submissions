#include <bits/stdc++.h>
using namespace std;

int h, w;
char b[29][29];
vector<int> my = {-1, 0, 1, 0};
vector<int> mx = {0, 1, 0, -1};

void dfs(set<pair<int, int>> s, int cy, int cx, int cnt) {
  if(cnt == 0) return;
  s.insert(make_pair(cy, cx));
  
  for(int i = 0; i < 4; i++) {
    int ey = cy + my[i];
    int ex = cx + mx[i];

    if(0 <= ey && ey < h && 0 <= ex && ex < w) {
      if(s.find(make_pair(ey, ex)) != s.end()) continue;
      if(b[ey][ex] == '#') b[ey][ex] = '.';
      // cout << cy << " " << cx << " " << ey << " " << ex << endl;
      dfs(s, ey, ex, cnt - 1);
    }
  }
}

int main() {
  cin >> h >> w;
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> b[i][j];

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if('0' < b[i][j] && b[i][j] <= '9') {
        // cout << i << " "<< j << " " << b[i][j] << endl;
        set<pair<int, int>> s;
        dfs(s, i, j, (int)b[i][j] - 48);
      }
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << (b[i][j] == '#' ? '#' : '.');
    }
    cout << endl;
  }
}