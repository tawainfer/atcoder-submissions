#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  deque<int> ptn;
  int n;
  cin >> n;

  int a;
  for(int i = 1; i <= n; i++) {
    cin >> a;
    for(int j = 0; j < a; j++) ptn.push_back(i);
  }

  int ans[h][w];
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(i % 2 == 0) ans[i][j] = ptn.front();
      else ans[i][w - j - 1] = ptn.front();
      ptn.pop_front();
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << ans[i][j];
      if(j < w - 1) cout << " ";
    }
    cout << endl;
  }
}