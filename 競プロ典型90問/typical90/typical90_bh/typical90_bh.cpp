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

  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];
  
  vector<int> c1(n + 2, 0);
  vector<int> c2(n + 2, 0);

  segtree<int, op, e> seg1(n + 2);
  for (int i = 1; i <= n; i++) {
    int cnt = seg1.prod(0, a[i]) + 1;
    seg1.set(a[i], cnt);
    c1[i] = cnt;
  }
  
  segtree<int, op, e> seg2(n + 2);
  for (int i = n; i >= 1; i--) {
    int cnt = seg2.prod(0, a[i]) + 1;
    seg2.set(a[i], cnt);
    c2[i] = cnt;
  }

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    ans = max(c1[i] + c2[i] - 1, ans);
  }
  cout << ans;
}
