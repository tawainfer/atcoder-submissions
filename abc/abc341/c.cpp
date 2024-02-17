// https://atcoder.jp/contests/abc341/submissions/50346061

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, n;
  cin >> h >> w >> n;

  string t;
  cin >> t;

  vector<vector<char>> f(h, vector<char>(w));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
    }
  }

  vector<pair<int, int>> ptn;
  for(auto c : t) {
    switch(c) {
      case 'U':
        ptn.push_back(make_pair(-1, 0));
        break;
      case 'D':
        ptn.push_back(make_pair(1, 0));
        break;
      case 'L':
        ptn.push_back(make_pair(0, -1));
        break;
      case 'R':
        ptn.push_back(make_pair(0, 1));
        break;
    }
  }

  int ans = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(f[i][j] == '#') continue;

      int cy = i;
      int cx = j;
      bool check = true;

      for(auto p : ptn) {
        cy += p.first;
        cx += p.second;
        if(!(0 <= cy && cy < h && 0 <= cx && cx < w) || f[cy][cx] == '#') check = false;
      }

      if(check) {
        ans++;
      }
    }
  }

  cout << ans;
}
