// https://atcoder.jp/contests/abc287/submissions/38394299

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

  UnionFind uf(n);
  vector<int> g[200009];
  int u, v;
  while (cin >> u >> v) {
    g[u].push_back(v);
    g[v].push_back(u);

    if(uf.connected(u, v)) {
      cout << "No";
      // cout << u << " " << v << endl;
      return 0;
    }

    uf.merge(u, v);
  }

  int cnt1 = 0;
  int cnt2 = 0;

  for (int i = 0; i < 200009; i++) {
    if (g[i].size() == 1) cnt1++;
    if (g[i].size() == 2) cnt2++;
  }

  if (!(cnt1 == 2 && cnt2 == (n - 2))) {
    cout << "No";
    return 0;
  } else cout << "Yes";
}
