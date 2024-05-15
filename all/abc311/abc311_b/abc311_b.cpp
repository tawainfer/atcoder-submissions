#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  char c[n][d];
  for(int i = 0; i < n; i++) for(int j = 0; j < d; j++) cin >> c[i][j];

  vector<int> cnt(d, 0);
  for(int i = 0; i < d; i++) {
    int s = 0;
    for(int j = 0; j < n; j++) {
      if(c[j][i] == 'o') s++;
    }

    cnt[i] = s;
  }
  cnt.push_back(-1);

  int ans = 0;
  int streak = 0;
  for(int i = 0; i <= d; i++) {
    if(cnt[i] == n) {
      streak++;
    } else {
      ans = max(streak, ans);
      streak = 0;
    }
  }

  cout << ans;
  return 0;
}