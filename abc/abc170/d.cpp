// https://atcoder.jp/contests/abc170/submissions/45493823

#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> cnt(MAX + 1, 0);
  for(auto &z : a) {
    cin >> z;
    cnt[z]++;
  }

  vector<int> sum(MAX + 1, 0);
  for(int i = 1; i <= MAX; i++) {
    if(cnt[i] == 0) continue;

    for(int j = 1; j <= MAX; j++) {
      if(i * j > MAX) break;
      sum[i * j] += cnt[i * j];
    }
  }

  int ans = 0;
  for(int x : a) {
    if(sum[x] == 1) {
      ans++;
    }
  }

  cout << ans;
  return 0;
}
