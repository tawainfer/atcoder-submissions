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
  int n, k;
  cin >> n >> k;

  map<int, vector<pair<int, int>>> ma;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    ma[a].push_back(make_pair(a, b));
  }

  segtree<int, op, e> seg(5009);
  for(auto m : ma) {
    if(!(1 <= m.first && m.first <= (1 + k))) continue;
    for(auto p : m.second) {
      seg.set(p.second, seg.get(p.second) + 1);
    }
  }

  int ans = 0;
  for(int al = 1; al <= 5000; al++) {
    int ar = al + k;

    for(int bl = 1; bl <= 5000; bl++) {
      int br = bl + k;
      ans = max(seg.prod(bl, br + 1), ans);
      if(br >= 5000) break;
    }

    for(auto p : ma[al]) {
      seg.set(p.second, seg.get(p.second) - 1);
    }

    for(auto p : ma[ar + 1]) {
      seg.set(p.second, seg.get(p.second) + 1);
    }

    if(ar >= 5000) break;
  }

  cout << ans;
}