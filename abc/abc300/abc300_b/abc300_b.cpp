#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  char a[h][w];
  char b[h][w];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> a[i][j];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> b[i][j];

  for(int s = 0; s <= h; s++) {
    for(int t = 0; t <= w; t++) {
      char c[h][w];
      for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) c[i][j] = '0';
      
      for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
          c[(i + s) % h][(j + t) % w] = a[i][j];
          // cout << (i + s) % h<<" "<<(j + t) % w << endl;
        }
      }

      bool check = true;
      for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
          if(b[i][j] != c[i][j]) check = false;
        }
      }

      // for(int i = 0; i < h; i++) {
      //   for(int j = 0; j < w; j++) {
      //     cout << c[i][j] << "";
      //   }
      //   cout << endl;
      // }
      // cout << endl;

      if(check) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No";
}