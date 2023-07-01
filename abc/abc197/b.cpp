// https://atcoder.jp/contests/abc197/submissions/26669540

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, x, y, ans = 1;
  cin >> h >> w >> x >> y;
  string c[h];
  for(int i = 0; i < w; i++) cin >> c[i];
  x--; y--;
  for(int i = x; i < h - 1; i++) {if(c[i + 1][y] == '.') ans++; else break;}
  for(int i = x; i >= 1; i--) {if(c[i - 1][y] == '.') ans++; else break;}
  for (int i = y; i < w - 1; i++) {if(c[x][i + 1] == '.') ans++; else break;}
  for (int i = y; i >= 1; i--) {if(c[x][i - 1] == '.') ans++; else break;}
  cout << ans;
}
