#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using namespace atcoder;

int op(int a, int b) {
  return a + b;
}

int e() {
  return 0;
}

int main() {
  int n, q;
  cin >> n >> q;

  segtree<int, op, e> seg(n + 1);
  for(int _ = 0; _ < q; _++) {
    int t;
    cin >> t;

    if(t == 1) {
      int p, x;
      cin >> p >> x;
      seg.set(p, x);
    } else if(t == 2) {
      int l, r;
      cin >> l >> r;
      cout << seg.prod(l, r) << endl;
    }
  }
}