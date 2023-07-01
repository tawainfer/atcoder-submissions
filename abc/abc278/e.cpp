// https://atcoder.jp/contests/abc278/submissions/41640531

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, n, x, y;
  cin >> h >> w >> n >> y >> x;

  map<int, int> cnt;

  int a[h][w];
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> a[i][j];
      cnt[a[i][j]]++;
    }
  }

  for(int i = 0; i <= h - y; i++) {
    map<int, int> c; // pos, cnt

    for(int j = 0; j <= w - x; j++) {
      int ans = cnt.size();

      if(j == 0) {
        for(int k = 0; k < y; k++) {
          for(int l = 0; l < x; l++) {
            int ty = i + k;
            int tx = j + l;
            c[a[ty][tx]]++;
          }
        }
      } else {
        int l = 0;
        for(int k = 0; k < y; k++) {
          int ty = i + k;
          int tx = j + l - 1;
          c[a[ty][tx]]--;
        }

        l = x - 1;
        for(int k = 0; k < y; k++) {
          int ty = i + k;
          int tx = j + l;
          c[a[ty][tx]]++;
        }
      }

      for(auto p : c) if(cnt[p.first] == p.second) ans--;
      cout << ans;
      if(j != w - x) cout << " ";
    }
    cout << endl;
  }
}
