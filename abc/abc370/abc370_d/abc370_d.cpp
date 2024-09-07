#include <bits/stdc++.h>
#include <atcoder/lazysegtree>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 2e18;

// using T = ll;
// using F = ll;

// T op(T a, T b) { return b; }   // 常に b で上書き
// T e() { return INF; }           // 初期値
// T mapping(F f, T x) { return f; }  // f で上書き
// F composition(F f, F g) { return f; }  // 新しい値で f を適用
// F id() { return INF; }          // 作用の初期値

int main() {
  ll h, w, q;
  cin >> h >> w >> q;

  vector<ll> my = {-1, 1, 0, 0};
  vector<ll> mx = {0, 0, 1, -1};

  // vector<vector<ll>> isWall((h <= w ? h : w), vector<ll>((h <= w ? w : h), 1));
  bool isRotate = false;
  if(h > w) {
    swap(h, w);
    isRotate = true;
  }

  // vector<lazy_segtree<T, op, e, F, mapping, composition, id>> sl(h);
  // vector<lazy_segtree<T, op, e, F, mapping, composition, id>> sr(h);
  // for(int i = 0; i < h; i++) {
  //   sl[i] = lazy_segtree<T, op, e, F, mapping, composition, id>(w);
  //   sr[i] = lazy_segtree<T, op, e, F, mapping, composition, id>(w);
  // }

  vector<set<ll>> sl(h), sr(h);
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      sl[i].insert(-j);
      sr[i].insert(j);
    }
  }

  for(int _ = 0; _ < q; _++) {
    ll r, c;
    cin >> r >> c;
    if(isRotate) swap(r, c);
    r--;
    c--;

    if(sr[r].find(c) != sr[r].end()) {
      // isWall[r][c] = 0;
      sl[r].erase(-c);
      sr[r].erase(c);
      continue;
    }

    for(int i = 0; i < 2; i++) {
      int cy = r + my[i];
      int cx = c + mx[i];
      while(0 <= cy && cy < h && 0 <= cx && cx < w) {
        if(sr[cy].find(cx) != sr[cy].end()) {
          sl[cy].erase(-cx);
          sr[cy].erase(cx);
          break;
        }
        cy += my[i];
        cx += mx[i];
      }
    }

    auto iter = sr[r].upper_bound(c);
    if(iter != sr[r].end()) {
      int cx = *iter;
      sr[r].erase(cx);
      sl[r].erase(-cx);
    }

    iter = sl[r].upper_bound(-c);
    if(iter != sl[r].end()) {
      int cx = *iter;
      sl[r].erase(cx);
      sr[r].erase(-cx);
    }
  }

  ll ans = 0;
  for(int i = 0; i < h; i++) {
    // for(int j = 0; j < w; j++) {
    //   if(isWall[i][j]) {
    //     ans++;
    //   }
    //   // cout << isWall[i][j] << " ";
    // }
    ans += sr[i].size();
    // cout << endl;
  }

  cout << ans;
}