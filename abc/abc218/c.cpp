// https://atcoder.jp/contests/abc218/submissions/44843099

#include <bits/stdc++.h>
using namespace std;

pair<int, int> edge_cell(vector<vector<char>> f) {
  for(int y = 0; y < f.size(); y++) {
    for(int x = 0; x < f[y].size(); x++) {
      if(f[y][x] == '#') {
        return make_pair(y, x);
      }
    }
  }
}

vector<vector<char>> rotate_grid(vector<vector<char>> f, int k) {
  if(k == 0) return f;

  vector<vector<char>> g(f.size(), vector<char>(f[0].size()));
  for(int y = 0; y < g.size(); y++) {
    for(int x = 0; x < g[y].size(); x++) {
      g[x][g[y].size() - y - 1] = f[y][x];
    }
  }

  return rotate_grid(g, k - 1);
}

vector<vector<char>> input_grid(int n) {
  vector<vector<char>> f(n, vector<char>(n));
  for(int i = 0;i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> f[i][j];
    }
  }

  return f;
}

int count_ceil(vector<vector<char>> f) {
  int cnt = 0;
  for(int i = 0; i < f.size(); i++) {
    for(int j = 0; j < f[i].size(); j++) {
      if(f[i][j] == '#') {
        cnt++;
      }
    }
  }

  return cnt;
}

int main() {
  int n;
  cin >> n;

  vector<vector<char>> s = input_grid(n);
  vector<vector<char>> t = input_grid(n);

  pair<int, int> ps = edge_cell(s);
  pair<int, int> pt = edge_cell(t);

  int cs = count_ceil(s);
  int ct = count_ceil(t);
  if(cs != ct) {
    cout << "No";
    return 0;
  }

  vector<pair<int, int>> ptn;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(s[i][j] == '#') {
        ptn.push_back(make_pair(i - ps.first, j - ps.second));
      }
    }
  }

  for(int k = 0; k < 4; k++) {
    vector<vector<char>> u = rotate_grid(t, k);
    pair<int, int> pu = edge_cell(u);

    bool check = true;
    for(auto p : ptn) {
      int y = pu.first + p.first;
      int x = pu.second + p.second;
      if(!(0 <= y && y < n && 0 <= x && x < n) || u[y][x] != '#') {
        check = false;
        break;
      }
    }

    if(check) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
  return 0;
}
