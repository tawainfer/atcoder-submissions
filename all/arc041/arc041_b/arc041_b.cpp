#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> b(n, vector<int>(m));
  vector<vector<int>> ans(n, vector<int>(m, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      char c;
      cin >> c;
      b[i][j] = (c - '0');
    }
  }

  vector<int> my = {-1, 0, 1, 0};
  vector<int> mx = {0, 1, 0, -1};

  for(int i = 1; i < n - 1; i++) {
    for(int j = 1; j < m - 1; j++) {
      while(1) {
        bool check = true;
        for(int k = 0; k < 4; k++) {
          if(b[i + my[k]][j + mx[k]] == 0) {
            check = false;
          }
        }

        if(!check) break;
        ans[i][j]++;
        for(int k = 0; k < 4; k++) {
          b[i + my[k]][j + mx[k]]--;
        }
      }
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << ans[i][j];
    }
    cout << endl;
  }
}