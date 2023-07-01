// https://atcoder.jp/contests/abc173/submissions/29646610

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int h, w, k, ans = 0; cin >> h >> w >> k;
  char c[h][w], d[h][w];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {cin >> c[i][j]; d[i][j] = c[i][j];}
  
  for(int bit = 0; bit < (1 << (h + w)); bit++) {
    int cnt = 0;
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) c[i][j] = d[i][j];
    
    for(int i = 0; i < h + w; i++) {
      if(bit & (1 << i)) {
        if(i < h) {
          for(int j = 0; j < w; j++) c[i][j] = 'r';
        } else {
          for(int j = 0; j < h; j++) c[j][i-h] = 'r';
        }
      }
    }
    
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) if(c[i][j] == '#') cnt++;
    if(cnt == k) ans++;
  }
  cout << ans;
}
