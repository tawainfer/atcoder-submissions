// https://atcoder.jp/contests/abc053/submissions/45095028

#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;

int main() {
  int n;
  cin >> n;

  vector<int> cnt(MAX + 1, 0);
  for(int _ = 0; _ < n; _++) {
    int a;
    cin >> a;
    cnt[a]++;
  }

  int l = 1;
  int r = MAX;
  while(l != r) {
    if(cnt[l] >= 2 && cnt[r] >= 2) {
      cnt[l] -= 1;
      cnt[r] -= 1;
    } else if(cnt[l] >= 2) {
      r--;
    } else {
      l++;
    }
  }

  while(cnt[l] >= 3) {
    cnt[l] -= 2;
  }

  int ans = 0;
  for(int i = 1; i <= MAX; i++) {
    if(cnt[i] >= 1) {
      ans++;
    }
  }

  for(int i = 1; i <= MAX; i++) {
    if(cnt[i] >= 2) {
      ans -= cnt[i] - 1;
    }
  }

  cout << ans;
  return 0;
}
