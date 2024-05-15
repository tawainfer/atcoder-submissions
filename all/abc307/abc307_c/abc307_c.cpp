#include <bits/stdc++.h>
using namespace std;

int main() {
  int ha, wa;
  cin >> ha >> wa;
  char a[ha][wa];
  int ca = 0;
  for(int i = 0; i < ha; i++) for(int j = 0; j < wa; j++) {
    cin >> a[i][j];
    if(a[i][j] == '#') ca++;
  }

  int hb, wb;
  cin >> hb >> wb;
  char b[hb][wb];
  int cb = 0;
  for(int i = 0; i < hb; i++) for(int j = 0; j < wb; j++) {
    cin >> b[i][j];
    if(b[i][j] == '#') cb++;
  }

  int hx, wx;
  cin >> hx >> wx;
  char x[hx][wx];
  for(int i = 0; i < hx; i++) for(int j = 0; j < wx; j++) cin >> x[i][j];

  for(int i = -10; i <= 10; i++) {
    for(int j = -10; j <= 10; j++) {
      for(int k = -10; k <= 10; k++) {
        for(int l = -10; l <= 10; l++) {
          char c[hx][wx];
          for(int y = 0; y < hx; y++) for(int z = 0; z < wx; z++) c[y][z] = '.';

          int ta = 0;
          for(int y = 0; y < ha; y++) {
            for(int z = 0; z < wa; z++) {
              int yy = y + i;
              int xx = z + j;
              if(!(0 <= yy && yy < hx)) continue;
              if(!(0 <= xx && xx < wx)) continue;
              if(a[y][z] == '.') continue;
              
              c[yy][xx] = a[y][z];
              ta++;
            }
          }

          int tb = 0;
          for(int y = 0; y < hb; y++) {
            for(int z = 0; z < wb; z++) {
              int yy = y + k;
              int xx = z + l;
              if(!(0 <= yy && yy < hx)) continue;
              if(!(0 <= xx && xx < wx)) continue;
              if(b[y][z] == '.') continue;
              
              c[yy][xx] = b[y][z];
              tb++;
            }
          }

          if(!(ta == ca && tb == cb)) continue;

          bool check = true;
          for(int y = 0; y < hx; y++) {
            for(int z = 0; z < wx; z++) {
              if(c[y][z] != x[y][z]) check = false;
            }
          }

          if(check) {
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "No";
  return 0;
}