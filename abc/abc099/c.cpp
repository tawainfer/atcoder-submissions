// https://atcoder.jp/contests/abc099/submissions/45786457

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int f(int x, vector<int> &cnt) {
  if(cnt[x] != INF) return cnt[x];
  cnt[x] = min(cnt[x], f(x - 1, cnt) +  1);

  int t = 6;
  while(x - t >= 0) {
    cnt[x] = min(cnt[x], f(x - t, cnt) + 1);
    t *= 6;
  }

  t = 9;
  while(x - t >= 0) {
    cnt[x] = min(cnt[x], f(x - t, cnt) + 1);
    t *= 9;
  }

  return cnt[x];
}

int main() {
  int n;
  cin >> n;

  vector<int> cnt(n + 1, INF);
  cnt[0] = 0;
  cout << f(n, cnt);
  return 0;
}
