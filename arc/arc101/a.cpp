// https://atcoder.jp/contests/abc107/submissions/42085776

#include <bits/stdc++.h>
using namespace std;
const int INF = 2e9;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> p, m;
  int x;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if(x < 0) m.push_back(x);
    else if(x > 0) p.push_back(x);
    else if(x == 0) {
      k--;
      if(k == 0) {
        cout << 0;
        return 0;
      }
    }
  }

  if(m.empty()) {
    cout << p[k - 1];
    return 0;
  }

  if(p.empty()) {
    cout << abs(m[m.size() - k]);
    return 0;
  }

  int ans = INF;
  for(int l = 0; l <= k; l++) {
    int idx_m = m.size() - l;
    int r = k - l - 1;
    int idx_p = r;
    if(!(0 <= idx_m && idx_p < p.size())) continue;
    
    if(idx_m == m.size()) ans = min(ans, p[idx_p]);
    else if(idx_p == -1) ans = min(ans, abs(m[idx_m]));
    else ans = min(ans, min(abs(m[idx_m]) * 2 + p[idx_p], p[idx_p] * 2 + abs(m[idx_m])));
  }

  cout << ans;
  return 0;
}
