#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  int p[h][w];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> p[i][j];

  int ans = 0;
  for(int bit = 1; bit < (1 << h); bit++) {
    vector<int> ptn;
    for(int i = 0; i < h; i++) if(bit & (1 << i)) ptn.push_back(i);

    map<int, int> cnt;
    for(int x = 0; x < w; x++) {
      int target = -1;
      
      for(int y : ptn) {
        if(target == -1) {
          target = p[y][x];
          continue;
        }

        if(target != p[y][x]) {
          target = -1;
          break;
        }
      }

      if(target != -1) cnt[target]++;
    }

    int ma = 0;
    for(auto z : cnt) ma = max(ma, z.second);
    ans = max(ans, (int)ptn.size() * ma);
  }

  cout << ans;
  return 0;
}