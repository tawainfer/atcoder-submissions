// https://atcoder.jp/contests/abc309/submissions/43342995

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int f[3][3];
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
    f[i][j] = (i) * 3 + (j + 1);
    // cout << f[i][j] << " ";
    }
    // cout << endl;
  }
  
  int y1, x1, y2, x2;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(f[i][j] == a) {
        y1 = i;
        x1 = j;
        break;
      }
    }
  }

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(f[i][j] == b) {
        y2 = i;
        x2 = j;
        break;
      }
    }
  }

  if(y1 == y2 && x1 + 1 == x2) cout << "Yes";
  else cout << "No";
}
