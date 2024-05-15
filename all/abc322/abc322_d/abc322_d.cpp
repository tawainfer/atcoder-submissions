#include <bits/stdc++.h>
using namespace std;

int all_cnt;

vector<vector<char>> rotate(vector<vector<char>> t) {
  vector<vector<char>> res(4, vector<char>(4));
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      res[j][4 - i - 1] = t[i][j];
    }
  }

  return res;
}

bool solve(vector<vector<vector<char>>> &f) {
  for(int ay = -3; ay <= 3; ay++) {
    for(int ax = -3; ax <= 3; ax++) {
      for(int by = -3; by <= 3; by++) {
        for(int bx = -3; bx <= 3; bx++) {
          for(int cy = -3; cy <= 3; cy++) {
            for(int cx = -3; cx <= 3; cx++) {

              vector<vector<int>> cnt(4, vector<int>(4, 0));
              for(int y = 0; y < 4; y++) {
                for(int x = 0; x < 4; x++) {
                  int ey = y + ay;
                  int ex = x + ax;
                  if(0 <= ey && ey < 4 && 0 <= ex && ex < 4 && f[0][y][x] == '#') {
                    cnt[ey][ex]++;
                  }
                }
              }

              for(int y = 0; y < 4; y++) {
                for(int x = 0; x < 4; x++) {
                  int ey = y + by;
                  int ex = x + bx;
                  if(0 <= ey && ey < 4 && 0 <= ex && ex < 4 && f[1][y][x] == '#') {
                    cnt[ey][ex]++;
                  }
                }
              }

              for(int y = 0; y < 4; y++) {
                for(int x = 0; x < 4; x++) {
                  int ey = y + cy;
                  int ex = x + cx;
                  if(0 <= ey && ey < 4 && 0 <= ex && ex < 4 && f[2][y][x] == '#') {
                    cnt[ey][ex]++;
                  }
                }
              }

              int check_cnt = 0;
              bool check = true;
              for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                  if(cnt[i][j] >= 2) {
                    check = false;
                    break;
                  } else if(cnt[i][j] == 1) {
                    check_cnt++;
                  }
                }
              }

              if(check_cnt == all_cnt) {
                // printf("%d %d %d %d %d %d\n", ay, ax, by, bx, cy, cx);
                // for(int i = 0; i < 4; i++) {
                //   for(int j = 0; j < 4; j++) {
                //     cout << cnt[i][j];
                //   }
                //   cout << endl;
                // }
                return true;
              }
            }
          }
        }
      }
    }
  }

  return false;
}

int main() {
  all_cnt = 0;

  vector<vector<vector<char>>> f;
  for(int _ = 0; _ < 3; _++) {
    vector<vector<char>> t(4, vector<char>(4));
    for(int i = 0; i < 4; i++) {
      for(int j = 0; j < 4; j++) {
        cin >> t[i][j];
        if(t[i][j] == '#') {
          all_cnt++;
        }
      }
    }

    f.push_back(t);
  }

  if(all_cnt != 16) {
    cout << "No";
    return 0;
  }

  // for(int i = 0; i < 3; i++) {
  //   for(int j = 0; j < 4; j++) {
  //     for(int k = 0; k < 4; k++) {
  //       cout << f[i][j][k];
  //     }
  //     cout << endl;
  //   }
  //   cout << endl;
  // }

  for(int a = 0; a <= 3; a++) {
    for(int b = 0; b <= 3; b++) {
      for(int z = 0; z <= 3; z++) {
        vector<int> ptn = {a, b, z};

        vector<vector<vector<char>>> g;
        for(int i = 0; i < 3; i++) {
          vector<vector<char>> t(4, vector<char>(4));
          for(int j = 0; j < 4; j++) {
            for(int k = 0; k < 4; k++) {
              t[j][k] = f[i][j][k];
            }
          }

          for(int _ = 0; _ < ptn[i]; _++) {
            t = rotate(t);
          }
          g.push_back(t);
        }

        if(solve(g)) {
          cout << "Yes";
          return 0;
        }
      }
    }
  }

  cout << "No";
  return 0;
}