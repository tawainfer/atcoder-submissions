// https://atcoder.jp/contests/abc297/submissions/40464004

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  char c[h][w];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> c[i][j];
  // for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cout << c[i][j];
  int cnt;
  for(int i = 0; i < h; i++) {
    cnt = 0;

    for(int j = 0; j < w; j++) {
      if(c[i][j] == 'T') cnt++;
      else cnt = 0;
      if(cnt == 2) {
        c[i][j - 1] = 'P';
        c[i][j] = 'C';
        cnt = 0;
      }
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << c[i][j];
    }
    cout << endl;
  }
}
