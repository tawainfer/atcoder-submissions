#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h, w;
  cin >> n >> h >> w;

  vector<int> a(n), b(n);
  vector<int> ptn;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    ptn.push_back(i);
  }

  do {
    for(int bit = 0; bit < (1 << n); bit++) {
      vector<vector<int>> f(h, vector<int>(w, 0));
      bool check = true;

      for(int i = 0; i < n; i++) {
        if(!check) break;
        int cy = a[ptn[i]];
        int cx = b[ptn[i]];
        if(bit & (1 << i)) swap(cy, cx);

        for(int j = 0; j < h * w; j++) {
          int y = j / w;
          int x = j % w;

          if(f[y][x] == 0) {
            if(y + cy - 1 >= h || x + cx - 1 >= w) {
              check = false;
            } else {
              for(int k = 0; k < cy; k++) {
                for(int l = 0; l < cx; l++) {
                  f[y + k][x + l]++;
                }
              }
            }

            break;
          }

          if(j == h * w - 1) {
            check = false;
          }
        }
      }

      check = true;
      for(int i = 0; i < h * w; i++) {
        int y = i / w;
        int x = i % w;
        if(f[y][x] != 1) {
          check = false;
          break;
        }
      }

      if(check) {
        cout << "Yes";
        return 0;
      }
    }
  } while(next_permutation(ptn.begin(), ptn.end()));

  cout << "No";
}