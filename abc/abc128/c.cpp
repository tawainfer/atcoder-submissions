// https://atcoder.jp/contests/abc128/submissions/29648453

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, m, k; cin >> n >> m;
  vector<vector<int>> s(m);
  for(int i = 0; i < m; i++) {
    cin >> k;
    while(k--) {
      int a; cin >> a; a--;
      s[i].push_back(a);
    }
  }
  vector<int> p(m);
  for(auto& z : p) cin >> z;
  
  long long ans = 0;
  for(int bit = 0; bit < (1 << n); bit++) {
    bool judge = true;
    for(int i = 0; i < m; i++) {
      int con = 0;
      for(auto z : s[i]) {
        if(bit & (1 << z)) con++;
      }
      if(con % 2 != p[i]) judge = false;
    }
    if(judge) ans++;
  } 
  cout << ans;
}
