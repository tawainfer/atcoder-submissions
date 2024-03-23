// https://atcoder.jp/contests/abc343/submissions/51533536

#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using namespace atcoder;

struct S {
  int fv;
  int fc;
  int sv;
  int sc;
};

S op(S l, S r) {
  map<int, int> m;
  m[l.fv] += l.fc;
  m[l.sv] += l.sc;
  m[r.fv] += r.fc;
  m[r.sv] += r.sc;

  vector<int> v;
  for(auto p : m) {
    v.push_back(p.first);
  }
  sort(v.begin(), v.end());

  return S{v.back(), m[v.back()], v[v.size() - 2], m[v[v.size() - 2]]};
}

S e() {
  return S{-1, 0, -2, 0};
}

int main() {
  int n, q;
  cin >> n >> q;

  segtree<S, op, e> seg(n + 1);
  for(int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    seg.set(i, S{x, 1, -1, 0});
  }

  for(int _ = 0; _ < q; _++) {
    int t;
    cin >> t;

    if(t == 1) {
      int p, x;
      cin >> p >> x;
      seg.set(p, S{x, 1, -1, 0});
    } else if(t == 2) {
      int l, r;
      cin >> l >> r;
      cout << seg.prod(l, r + 1).sc << endl;
    }
  }
}
