#include <bits/stdc++.h>
using namespace std;

char c[19][109];

int paint_cnt(vector<int> &ptn, int k, int &h, int &w) {
  char d[19][109];
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) d[i][j] = c[i][j];

  for(int i : ptn) for(int j = 0; j < w; j++) d[i][j] = '#';

  int pos = 0;
  int max_cnt = 0;
  while(k--) {
    for(int j = 0; j < w; j++) {
      int cnt = 0;
      for(int i = 0; i < h; i++) if(d[i][j] == '.') cnt++;
      
      if(cnt > max_cnt) {
        max_cnt = cnt;
        pos = j;
      }
    }

    for(int i = 0; i < h; i++) d[i][pos] = '#';
  }

  int res = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(d[i][j] == '#') res++;
    }
  }

  return res;
}

int main() {
  int h, w, k;
  cin >> h >> w >> k;

  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> c[i][j];

  int ans = 0;
  for(int bit = 0; bit < (1 << h); bit++) {
    vector<int> ptn;
    for(int i = 0; i < h; i++) if(bit & (1 << i)) ptn.push_back(i);
    if(ptn.size() > k) continue;

    ans = max(ans, paint_cnt(ptn, k - ptn.size(), h, w));
  }

  cout << ans;
  return 0;
}