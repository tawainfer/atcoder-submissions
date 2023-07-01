// https://atcoder.jp/contests/abc167/submissions/29635064

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, m, x, ans = 1e9; cin >> n >> m >> x;
  int c[n], a[n][m];
  for(int i = 0; i < n; i++) {
    cin >> c[i];
    for(int j = 0; j < m; j++) cin >> a[i][j];
  }
  
  for(int bit = 0; bit < (1 << n); bit++) {
    vector<int> algo(m, 0);
    int price = 0;
    bool judge = true;
    
    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) {
        price += c[i];
        for(int j = 0; j < m; j++) algo[j] += a[i][j];
      }
    }
    
    for(int j = 0; j < m; j++) if(algo[j] < x) judge = false;
    if(judge) ans = min(ans, price);
  }
  
  if(ans == 1e9) cout << -1;
  else cout << ans;
}
