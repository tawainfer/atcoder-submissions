#include <bits/stdc++.h>
#include <atcoder/lazysegtree>
using namespace std;
using namespace atcoder;

using S = int;
using F = int;
const int ID = INT32_MIN;

S op(S a, S b) {
  return max(a, b);
}

S mapping(F f, S x) {
  if(f == ID) {
    return x;
  }
  return f;
}

F composition(F f, F g) {
  if(f == ID) {
    return g;
  }
  return f;
}

S e() {
  return 0;
}

F id() {
  return ID;
}

int main() {
  int w, n;
  cin >> w >> n;

  lazy_segtree<S, op, e, F, mapping, composition, id> seg(w + 1);

  for(int _ = 0; _ < n; _++) {
    int l, r;
    cin >> l >> r;
    int h = seg.prod(l, r + 1) + 1;
    cout << h << endl;
    seg.apply(l, r + 1, h);
  }
}