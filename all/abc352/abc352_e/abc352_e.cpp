#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class UnionFind {
public:
  UnionFind() = default;

  explicit UnionFind(size_t n)
    : m_parents(n),
      m_sizes(n, 1) {
    std::iota(m_parents.begin(), m_parents.end(), 0);
  }

  int find(int i) {
    if (m_parents[i] == i) {
      return i;
    }
    return (m_parents[i] = find(m_parents[i]));
  }

  void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
      if (m_sizes[a] < m_sizes[b]) {
        std::swap(a, b);
      }
      m_sizes[a] += m_sizes[b];
      m_parents[b] = a;
    }
  }

  bool connected(int a, int b) {
    return (find(a) == find(b));
  }

  int size(int i) {
    return m_sizes[find(i)];
  }

private:
  std::vector<int> m_parents;
  std::vector<int> m_sizes;
};

int main() {
  ll n, m;
  cin >> n >> m;

  vector<set<pair<ll, ll>>> g(n + 1);
  vector<vector<int>> a(m);
  UnionFind uf(n + 1);

  vector<pair<ll, ll>> ptn;
  for(int i = 0; i < m; i++) {
    ll k, c;
    cin >> k >> c;
    for(int j = 0; j < k; j++) {
      ll x;
      cin >> x;
      a[i].push_back(x);
    }

    ptn.push_back(make_pair(c, i));
  }
  sort(ptn.begin(), ptn.end());

  ll sum = 0;
  for(int k = 0; k < m; k++) {
    int i = ptn[k].second;
    for(int j = 1; j < a[i].size(); j++) {
      if(!uf.connected(a[i][j - 1], a[i][j])) {
        sum += ptn[k].first;
        uf.merge(a[i][j - 1], a[i][j]);
      }

      if(uf.size(1) == n) {
        cout << sum;
        return 0;
      }
    }
  }

  cout << -1;
}
