// https://atcoder.jp/contests/abc190/submissions/29622593

#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, m, ans = 0, cnt = 0; cin >> n >> m;
  vector<int> a(m), b(m);
  for(int i = 0; i < m; i++) cin >> a[i] >> b[i];
  int k; cin >> k;
  vector<int> c(k), d(k);
  for(int i = 0; i < k; i++) cin >> c[i] >> d[i];
  
  for(int bit = 0; bit < (1 << k); bit++) {
    vector<bool> exist(n, false);
    for(int i = 0; i < k; i++) {
      if(bit & (1 << i)) exist[c[i]-1] = true;
      else exist[d[i]-1] = true;
    }
    for(int i = 0; i < m; i++) if(exist[a[i]-1] && exist[b[i]-1]) cnt++;
    ans = max(ans, cnt);
    cnt = 0;
  }
  cout << ans;
}
