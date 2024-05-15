#include <bits/stdc++.h>
using namespace std;

vector<int> my = {-1, -1, 0, 1, 1, 1, 0, -1};
vector<int> mx = {0, 1, 1, 1, 0, -1, -1, -1};

bool bfs(int &y, int &x, vector<vector<int>> &f, vector<vector<bool>> &hit) {
  queue<pair<int, int>> q;
  for(int i = 0; i < 4; i++) {
    int cnt = 0;
    set<int> se;
    vector<vector<bool>> seen(3, vector<bool>(3, false));
    seen[y][x] = true;


    q.push(make_pair(y, x));
    while(!q.empty()) {
      // int q.front().first = q.front().first;
      // int q.front().second = q.front().second;

      int ey = q.front().first + my[i];
      int ex = q.front().second + mx[i];
      if(0 <= ey && ey < 3 && 0 <= ex && ex < 3 && !seen[ey][ex]) {
        if(hit[ey][ex]) cnt++;
        seen[ey][ex] = true;
        se.insert(f[ey][ex]);
        q.push(make_pair(ey, ex));
      }

      ey = q.front().first + my[i + 4];
      ex = q.front().second + mx[i + 4];
      if(0 <= ey && ey < 3 && 0 <= ex && ex < 3 && !seen[ey][ex]) {
        if(hit[ey][ex]) cnt++;
        seen[ey][ex] = true;
        se.insert(f[ey][ex]);
        q.push(make_pair(ey, ex));
      }
      q.pop();
    }

    if(se.size() == 1 && (*se.begin()) != f[y][x] && cnt == 2) {
      return false;
      // cout << y << " " << x << " " << i << " " << (*se.begin()) << " " << f[y][x] << endl;
    }
  }

  return true;
}

int main() {
  vector<vector<int>> f(3, vector<int>(3));
  for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++) cin >> f[i][j];

  vector<int> ptn;
  for(int i = 0; i < 9; i++) ptn.push_back(i);

  int all = 0;
  int cnt = 0;
  do {
    all++;
    vector<vector<bool>> hit(3, vector<bool>(3, false));
    bool check = true;

    for(int i = 0; i < ptn.size(); i++) {
      int y = ptn[i] / 3;
      int x = ptn[i] % 3;
      hit[y][x] = true;
      if(!bfs(y, x, f, hit)) {
        check = false;
        break;
      }
    }

    if(check) {
      cnt++;
      // for(auto x : ptn) cout << x << " ";
      // cout << endl;
    }
  } while(next_permutation(ptn.begin(), ptn.end()));

  cout << fixed << setprecision(9) << (double)cnt / all;
  // cout << endl;
  // cout << all << " " << cnt << endl;
  return 0;
}