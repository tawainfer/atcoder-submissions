#include <bits/stdc++.h>
#include <atcoder/segtree>

using namespace std;
using namespace atcoder;

int op(int a, int b) {
  return max(a, b);
}

int e() {
  return 0;
}

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;
  
  segtree<int, op, e> seg(500009);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int cnt = seg.prod(0, a[i]) + 1;
    seg.set(a[i], cnt);
    ans = max(ans, cnt);
  }
  
  cout << ans << endl;
}
