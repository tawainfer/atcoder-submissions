#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
  UnionFind(int n) {
    init(n);
  }

  // n個の頂点で初期化
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

  int u, v;
  set<int> g[n + 1];
  UnionFind uf(n);

  for(int i = 0; i < m; i++) {
    cin >> u >> v;
    g[u].insert(v);
    g[v].insert(u);
    uf.merge(u, v);
  }

  int k;
  cin >> k;

  set<pair<int, int>> bad;
  for(int i = 0; i < k; i++) {
    cin >> u >> v;

    pair<int, int> p = make_pair(min(uf.root(u), uf.root(v)), max(uf.root(u), uf.root(v)));
    bad.insert(p);
  }

  int q;
  cin >> q;

  while(cin >> u >> v) {
    if(uf.same(u, v)) {
      cout << "Yes\n";
      continue;
    }

    pair<int, int> p = make_pair(min(uf.root(u), uf.root(v)), max(uf.root(u), uf.root(v)));
    if(bad.find(p) == bad.end()) cout << "Yes\n";
    else cout << "No\n";
  }
}