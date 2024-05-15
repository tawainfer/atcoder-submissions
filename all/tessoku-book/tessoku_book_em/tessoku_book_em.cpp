#include <bits/stdc++.h>
using namespace std;


class UnionFind {
public:
  UnionFind() = default;

  /// @brief Union-Find 木を構築します。
  /// @param n 要素数
  explicit UnionFind(size_t n) : m_parents(n), m_sizes(n, 1) {
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
      // union by size (小さいほうが子になる）
      if (m_sizes[a] < m_sizes[b]) {
        std::swap(a, b);
      }

      m_sizes[a] += m_sizes[b];
      m_parents[b] = a;
    }
  }

  /// @brief a と b が同じグループに属すかを返します。
  /// @param a 一方のインデックス
  /// @param b 他方のインデックス
  /// @return a と b が同じグループに属す場合 true, それ以外の場合は false
  bool connected(int a, int b) { return (find(a) == find(b)); }

  /// @brief i が属するグループの要素数を返します。
  /// @param i インデックス
  /// @return i が属するグループの要素数
  int size(int i) { return m_sizes[find(i)]; }

private:
  // m_parents[i] は i の 親,
  // root の場合は自身が親
  std::vector<int> m_parents;

  // グループの要素数 (root 用)
  // i が root のときのみ, m_sizes[i] はそのグループに属する要素数を表す
  std::vector<int> m_sizes;
};

int main() {
  int n, m;
  cin >> n >> m;

  UnionFind uf(n + 1);
  vector<pair<int, int>> p(m + 1);
  for(int i = 1; i <= m; i++) {
    int a, b;
    cin >> a >> b;
    p[i] = make_pair(a, b);
  }

  int q;
  cin >> q;

  vector<pair<int, int>> query;
  set<int> avoid;

  for(int i = 0; i < q; i++) {
    int t;
    cin >> t;
    
    query.push_back(make_pair(-1, -1));
    if(t == 1) {
      int x;
      cin >> x;
      query.back().first = x;
      avoid.insert(x);
    } else {
      int u, v;
      cin >> u >> v;
      query.back().first = u;
      query.back().second = v;
    }
  }

  for(int i = 1; i <= m; i++) {
    if(avoid.find(i) == avoid.end()) {
      uf.merge(p[i].first, p[i].second);
    }
  }

  vector<bool> ans;
  while(!query.empty()) {
    if(query.back().second == -1) {
      int x = query.back().first;
      uf.merge(p[x].first, p[x].second);
    } else {
      int u = query.back().first;
      int v = query.back().second;
      ans.push_back(uf.find(u) == uf.find(v) ? true : false);
    }

    query.pop_back();
  }

  while(!ans.empty()) {
    bool b = ans.back();
    ans.pop_back();
    cout << (b ? "Yes\n" : "No\n");
  }
}