#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> field(int n) {
  if(n == 0) {
    vector<vector<char>> tmp(1, vector<char>(1, '#'));
    return tmp;
  }

  int x = 1;
  for(int i = 0; i < n; i++) {
    x *= 3;
  }

  vector<vector<char>> res(x, vector<char>(x));
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      vector<vector<char>> tmp(x / 3, vector<char>(x / 3));
      if(i == 1 && j == 1) {
        for(int k = 0; k < x / 3; k++) {
          for(int l = 0; l < x / 3; l++) {
            tmp[k][l] = '.';
          }
        }
      } else {
        tmp = field(n - 1);
      }

      int cy = 0;
      int cx = 0;
      for(int k = 0; k < tmp.size(); k++) {
        for(int l = 0; l < tmp[k].size(); l++) {
          res[x / 3 * i + k][x / 3 * j + l] = tmp[k][l];
          cx++;
        }
        cy++;
      }
    }
  }

  return res;
}

int main() {
  int n;
  cin >> n;

  vector<vector<char>> ans = field(n);
  for(int i = 0; i < ans.size(); i++) {
    for(int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j];
    }
    cout << endl;
  }
}