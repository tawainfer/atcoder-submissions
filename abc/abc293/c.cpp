// https://atcoder.jp/contests/abc293/submissions/39614652

#include <bits/stdc++.h>
using namespace std;

int h, w;
int ans = 0;
int a[19][19];

void dfs(int cy, int cx, set<int> ptn) {
  if(cy == h - 1 && cx == w - 1) {
    ans++;
    // for(auto &z : ptn) cout << z << " ";
    // cout << endl;
    return;
  }

  if(0 <= (cy + 1) && (cy + 1) < h && 0 <= cx && cx < w) {
    if(ptn.find(a[cy + 1][cx]) == ptn.end()) {
      ptn.insert(a[cy + 1][cx]);
      dfs(cy + 1, cx, ptn);
      ptn.erase(a[cy + 1][cx]);
    }
  }
  
  if(0 <= (cy) && (cy) < h && 0 <= (cx + 1) && (cx + 1) < w) {
    if(ptn.find(a[cy][cx + 1]) == ptn.end()) {
      ptn.insert(a[cy][cx + 1]);
      dfs(cy, cx + 1, ptn);
      ptn.erase(a[cy][cx + 1]);
    }
  }
}

int main() {
  cin >> h >> w;

  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> a[i][j];

  set<int> t;
  t.insert(a[0][0]);

  dfs(0, 0, t);
  cout << ans;
  return 0;
}
