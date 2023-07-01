// https://atcoder.jp/contests/abc079/submissions/39485397

#include <bits/stdc++.h>
using namespace std;

int change[10][10];

void dfs(vector<int> ptn, int &mi) {
  for(int i = 0; i <= 9; i++) {
    if(find(ptn.begin(), ptn.end(), i) == ptn.end()) {
      ptn.push_back(i);
      dfs(ptn, mi);
      ptn.pop_back();
    }
  }

  if(ptn.back() == 1) {
    int sum = 0;
    for(int i = 0; i < ptn.size() - 1; i++) {
      sum += change[ptn[i]][ptn[i + 1]];
    }

    mi = min(mi, sum);
  }
}

int main() {
  int h, w;
  cin >> h >> w;

  vector<int> cnt(10, 0), mi(10, 2e9);
  
  for(int i = 0; i < 10; i++) for(int j = 0; j < 10; j++) {
    cin >> change[i][j];
  }

  int x;
  for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
    cin >> x;
    if(x != -1) cnt[x]++;
  }

  int ans = 0;
  for(int i = 2; i <= 10; i++) {
    int x = i % 10;
    dfs({x}, mi[x]);
    ans += mi[x] * cnt[x];
  }

  cout << ans;
  return 0;
}
