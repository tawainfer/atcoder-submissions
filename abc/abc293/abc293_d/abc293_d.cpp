#include <bits/stdc++.h>
using namespace std;

class UnionFind
{
public:

	UnionFind() = default;

	/// @brief Union-Find 木を構築します。
	/// @param n 要素数
	explicit UnionFind(size_t n)
		: m_parents(n)
	{
		std::iota(m_parents.begin(), m_parents.end(), 0);
	}

	/// @brief 頂点 i の root のインデックスを返します。
	/// @param i 調べる頂点のインデックス
	/// @return 頂点 i の root のインデックス
	int find(int i)
	{
		if (m_parents[i] == i)
		{
			return i;
		}

		// 経路圧縮
		return (m_parents[i] = find(m_parents[i]));
	}

	/// @brief a のグループと b のグループを統合します。
	/// @param a 一方のインデックス
	/// @param b 他方のインデックス
	void merge(int a, int b)
	{
		a = find(a);
		b = find(b);

		if (a != b)
		{
			m_parents[b] = a;
		}
	}

	/// @brief a と b が同じグループに属すかを返します。
	/// @param a 一方のインデックス
	/// @param b 他方のインデックス
	/// @return a と b が同じグループに属す場合 true, それ以外の場合は false
	bool connected(int a, int b)
	{
		return (find(a) == find(b));
	}

private:

	// m_parents[i] は i の 親,
	// root の場合は自身が親
	std::vector<int> m_parents;
};

int main() {
  int n, m;
  cin >> n >> m;

  int a, c;
  char b, d;
  vector<int> g[200009];
  vector<bool> heiro(200009, false);

  UnionFind uf(200009);
  int x = 0;
  int y = 0;

  while(cin >> a >> b >> c >> d) {
    g[a].push_back(c);
    g[c].push_back(a);

    if(uf.connected(a, c)) {
      heiro[a] = true;
    }
    
    uf.merge(a, c);
  }

  map<int, vector<int>> check;
  for(int i = 1; i <= n; i++) check[uf.find(i)].push_back(i);
  
  for(auto &z : check) {
    bool b = false;
    for(auto &zz : z.second) if(heiro[zz]) b = true;
    
    if(b) x++;
    else y++;
  }

  cout << x << " " << y;
  return 0;
}