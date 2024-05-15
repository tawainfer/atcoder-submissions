#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  char c[n][m];
  for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> c[i][j];

  for(int i = 0; i < n - 9 + 1; i++) {
    for(int j = 0; j < m - 9 + 1; j++) {
      bool check = true;

      for(int k = 0; k < 3; k++) {
        for(int l = 0; l < 3; l++) {
          if(c[i + k][j + l] == '.') {
            check = false;
          }
        }
      }

      for(int k = 0; k < 3; k++) {
        for(int l = 0; l < 3; l++) {
          if(c[i + 8 - k][j + 8 - l] == '.') {
            check = false;
          }
        }
      }

      for(int k = 0; k < 4; k++) {
        for(int l = 0; l < 4; l++) {
          if(k != 3 && l != 3) continue;
          if(c[i + k][j + l] == '#') {
            check = false;
          }
        }
      }

      for(int k = 0; k < 4; k++) {
        for(int l = 0; l < 4; l++) {
          if(k != 4 && l != 4) continue;
          if(c[i + 8 - k][j + 8 - l] == '#') {
            check = false;
          }
        }
      }

      if(check) {
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }
}