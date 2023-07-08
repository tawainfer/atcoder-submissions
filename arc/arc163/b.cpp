// https://atcoder.jp/contests/arc163/submissions/43330038

#include <bits/stdc++.h>
using namespace std;
const int INF = 2e9;

int main() {
  int n, m;
  cin >> n >> m;

  int l, r;
  cin >> l >> r;

  vector<int> a(n - 2);
  for(int &z : a) cin >> z;
  sort(a.begin(), a.end());

  int ans = INF;
  for(int i = 0; i < a.size() - m + 1; i++) {
    int j = i + m - 1;
    int cnt = 0;
    cnt += max(l - a[i], 0);
    cnt += max(a[j] - r, 0);
    ans = min(ans, cnt);
  }

  cout << ans;
  return 0;
}
