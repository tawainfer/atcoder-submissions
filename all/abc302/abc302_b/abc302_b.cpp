#include <bits/stdc++.h>
using namespace std;

vector<char> ptn = {'s', 'n', 'u', 'k', 'e'};
vector<int> dy = {-1, 0, 1, 0, -1, -1, 1, 1};
vector<int> dx = {0, 1, 0, -1, -1, 1, -1, 1};
vector<pair<int, int>> ans;
int h, w;
char c[109][109];

void dfs(vector<pair<int, int>> v, int status) {
  if (v.size() == 5) {
    for (auto p : v) {
      ans.push_back(p);
    }
    return;
  }

  int cy = v.back().first;
  int cx = v.back().second;

  for (int i = 0; i < 8; i++) {
    if (i != status) continue;
    int ey = cy + dy[i];
    int ex = cx + dx[i];

    if (!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
    if (c[ey][ex] != ptn[v.size()]) continue;

    v.push_back(make_pair(ey, ex));
    dfs(v, status);
    v.pop_back();
  }
}

int main() {
  cin >> h >> w;
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++) cin >> c[i][j];

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      for (int k = 0; k < 8; k++)
        if (c[i][j] == 's') dfs({make_pair(i, j)}, k);
    }
  }

  for (auto p : ans) {
    cout << p.first + 1 << " " << p.second + 1 << endl;
  }
}