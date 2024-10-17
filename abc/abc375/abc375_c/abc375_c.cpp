#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<char>> &f, int idx, int count) {
  int n = f.size();

  for(int _ = 0; _ < count; _++) {
    map<pair<int, int>, char> scheduled;
    
    for(int x = idx; x < n - idx; x++) {
      scheduled[make_pair(x, n - 1 - (idx))] = f[(idx)][x];
      scheduled[make_pair(x, n - 1 - (n - 1 - idx))] = f[(n - 1 - idx)][x];
      // printf("p1 idx: %d, y: %d, x: %d\n", idx, (idx), x);
      // printf("p1 idx: %d, y: %d, x: %d\n", idx, (n - 1 - idx), x);
    }

    for(int y = idx; y < n - idx; y++) {
      scheduled[make_pair((idx), n - 1 - y)] = f[y][(idx)];
      scheduled[make_pair((n - 1 - idx), n - 1 - y)] = f[y][(n - 1 - idx)];
      // printf("p2 idx: %d, y: %d, x: %d\n", idx, y, (idx));
      // printf("p2 idx: %d, y: %d, x: %d\n", idx, y, (n - 1 - idx));
    }

    for(auto p : scheduled) {
      int y = p.first.first;
      int x = p.first.second;
      char c = p.second;
      f[y][x] = c;
      // printf("p3 idx: %d, y: %d, x: %d\n", idx, y, x);
    }
  }
}

int main() {
  int n;
  cin >> n;

  vector<vector<char>> a(n, vector<char>(n));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < n / 2; i++) {
    rotate(a, i, (i + 1) % 4);
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
}