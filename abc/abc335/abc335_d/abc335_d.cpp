#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  vector<vector<int>> f(n, vector<int>(n, -1));
  int cd = 1;
  int cy = 0;
  int cx = 0;
  f[0][0] = 1;

  for(int i = 2; i < n * n; i++) {
    int ey = cy + my[cd];
    int ex = cx + mx[cd];

    if(0 <= ey && ey < n && 0 <= ex && ex < n && f[ey][ex] == -1) {
      f[ey][ex] = i;
      cy = ey;
      cx = ex;
    } else {
      cd = (cd + 1) % 4;
      ey = cy + my[cd];
      ex = cx + mx[cd];
      // cout << i << " " << ey << " " << ex << endl;
      f[ey][ex] = i;
      cy = ey;
      cx = ex;
    }


  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < n; j++) {
  //     cout << f[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << (f[i][j] == -1 ? "T" : to_string(f[i][j])) << " ";
    }
    cout << endl;
  }
}