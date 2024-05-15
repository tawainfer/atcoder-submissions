#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
  UnionFind(int n) {
    init(n);
  }

  // n + 1個の頂点で初期化(1-indexedに対応させるため)
  void init(int n) {
    parent.assign(n + 1, -1);
    set_size.assign(n + 1, 1);
  }

  // 頂点xのrootを返す
  int root(int x) {
    while(parent[x] != -1) x = parent[x]; // rootに到達するまで探索する
    return x;
  }

  // 頂点xと頂点yを統合する
  void merge(int x, int y) {
    int root_x = root(x);
    int root_y = root(y);
    if(root(x) == root(y)) return; // 既に同じ集合に属する場合は終了する

    // 集合の要素数が小さい頂点をベースに統合する(union by size)
    if(set_size[root_x] < set_size[root_y]) {
      parent[root_x] = root_y;
      set_size[root_y] += set_size[root_x];
    } else {
      parent[root_y] = root_x;
      set_size[root_x] += set_size[root_y];
    }
  }

  // 頂点xと頂点yが同じ集合に属するか判定する
  bool same(int x, int y) {
    if(root(x) == root(y)) return true;
    return false;
  }

  // 頂点xが含まれる集合の要素数を返す
  int size(int x) {
    return set_size[x];
  }

private:
  vector<int> parent; // 頂点iの親を表す(rootの場合、parent[i] = i)
  vector<int> set_size; // 頂点iが含まれる集合の要素数を表す
};

int main() {
  int n, m;
  cin >> n >> m;

  deque<vector<int>> g;
  int a, b, c;
  while(cin >> a >> b >> c) g.push_back({c, a, b});
  sort(g.begin(), g.end());

  UnionFind uf(n);
  int ans = 0;

  while(!g.empty()) {
    c = g[0][0];
    a = g[0][1];
    b = g[0][2];
    g.pop_front();

    if(!uf.same(a, b)) {
      ans += c;
      uf.merge(a, b);
    }
  }

  cout << ans;
  return 0;
}