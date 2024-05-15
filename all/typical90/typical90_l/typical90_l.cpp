#include <bits/stdc++.h>
using namespace std;

bool paint[2009][2009];

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
    if(m_parents[i] == i) { return i; }

    // 経路圧縮
    return (m_parents[i] = find(m_parents[i]));
  }

  /// @brief a のグループと b のグループを統合します。
  /// @param a 一方のインデックス
  /// @param b 他方のインデックス
  void merge(int a, int b) {
    a = find(a);
    b = find(b);

    if(a != b) { m_parents[b] = a; }
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
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int h, w, q;
  cin >> h >> w >> q;

  UnionFind uf(h * w);
  vector<int> dy = {-1, 0, 1, 0};
  vector<int> dx = {0, 1, 0, -1};

  int t;
  while(cin >> t) {
    if(t == 1) {
      int y, x;
      cin >> y >> x;
      y--;
      x--;

      for(int i = 0; i < 4; i++) {
        int yy = y + dy[i];
        int xx = x + dx[i];

        if(0 <= yy && yy < h && 0 <= xx && xx < w) {
          if(paint[yy][xx]) { uf.merge(yy * w + xx, y * w + x); }
        }
      }
      paint[y][x] = true;
    } else {
      int ay, ax, by, bx;
      cin >> ay >> ax >> by >> bx;
      ay--;
      ax--;
      by--;
      bx--;

      if(paint[ay][ax] && paint[by][bx] &&
         uf.connected(ay * w + ax, by * w + bx))
        cout << "Yes\n";
      else cout << "No\n";
    }
  }
}