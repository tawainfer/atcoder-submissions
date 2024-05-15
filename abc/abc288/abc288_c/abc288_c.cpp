#include <bits/stdc++.h>
using namespace std;

class UnionFind {
 public:
  UnionFind() = default;

  /// @brief Union-Find 木を構築します。
  /// @param n 要素数
  explicit UnionFind(size_t n) : m_parents(n) {
    std::iota(m_parents.begin(), m_parents.end(), 0);
  }

  /// @brief 頂点 i の root のインデックスを返します。
  /// @param i 調べる頂点のインデックス
  /// @return 頂点 i の root のインデックス
  int find(int i) {
    if (m_parents[i] == i) {
      return i;
    }

    // 経路圧縮
    return (m_parents[i] = find(m_parents[i]));
  }

  /// @brief a のグループと b のグループを統合します。
  /// @param a 一方のインデックス
  /// @param b 他方のインデックス
  void merge(int a, int b) {
    a = find(a);
    b = find(b);

    if (a != b) {
      m_parents[b] = a;
    }
  }

  /// @brief a と b が同じグループに属すかを返します。
  /// @param a 一方のインデックス
  /// @param b 他方のインデックス
  /// @return a と b が同じグループに属す場合 true, それ以外の場合は false
  bool connected(int a, int b) { return (find(a) == find(b)); }

 private:
  // m_parents[i] は i の 親,
  // root の場合は自身が親
  std::vector<int> m_parents;
};

int main() {
  int n, m;
  cin >> n >> m;

  int ans = 0;
  vector<int> g[200009];
  int a, b;

  UnionFind uf(n + 1);
  while (cin >> a >> b) {
    g[a].push_back(b);
    g[b].push_back(a);
    if(uf.connected(a, b)) ans++;
    uf.merge(a, b);
  }

  cout << ans;
  return 0;
}