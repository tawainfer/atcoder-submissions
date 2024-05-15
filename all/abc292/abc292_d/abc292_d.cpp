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

  vector<int> g[200009];
  vector<bool> seen(200009, false);

void dfs(int x, int &cnt) {
  for(auto &z : g[x]) {
    if(!seen[z]) {
      cnt++;
      seen[z] = true;
      // cout << z << " check\n";
      dfs(z, cnt);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  UnionFind uf(200009);
  vector<int> cnt(200009, 0);
  int u, v;
  while(cin >> u >> v) {
    g[u].push_back(v);
    g[v].push_back(u);

    if(u < v) swap(u, v);
    cnt[u]++;
    uf.merge(u, v);
  }

  for(int i = 1; i <= n; i++) {
    if(uf.find(i) != i) {
      cnt[uf.find(i)] += cnt[i];
      cnt[i] = 0;
    }
  }

  for(int i = 1; i <= n; i++) {
    // cout << cnt[i] << " ";
  }

  for(int i = 1; i <= n; i++) {
    if(!seen[i]) {
      int c = 1;
      seen[i] = true;
      dfs(i, c);
      
      int line = cnt[uf.find(i)];
      if(c != line) {
        cout << "No";
        // cout << endl << c << " " << line << endl;
        return 0;
      }
    }
  }

  cout << "Yes";
  return 0;
}