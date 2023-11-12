// https://atcoder.jp/contests/abc328/submissions/47517134

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

class UnionFind
{
public:

  UnionFind() = default;

  explicit UnionFind(size_t n)
    : m_parents(n)
    , m_sizes(n, 1)
  {
    std::iota(m_parents.begin(), m_parents.end(), 0);
  }

  int find(int i)
  {
    if (m_parents[i] == i)
    {
      return i;
    }

    return (m_parents[i] = find(m_parents[i]));
  }

  void merge(int a, int b)
  {
    a = find(a);
    b = find(b);

    if (a != b)
    {
      if (m_sizes[a] < m_sizes[b])
      {
        std::swap(a, b);
      }

      m_sizes[a] += m_sizes[b];
      m_parents[b] = a;
    }
  }

  bool connected(int a, int b)
  {
    return (find(a) == find(b));
  }

  int size(int i)
  {
    return m_sizes[find(i)];
  }

private:
  std::vector<int> m_parents;
  std::vector<int> m_sizes;
};

void get_ptn(int n, int m, set<ll> p, vector<set<ll>> &ptn) {
  if(p.size() == n) {
    ptn.push_back(p);
    return;
  }

  ll idx = -1;
  if(p.size() >= 1) {
    auto iter = p.end();
    iter--;
    idx = (*iter);
  }

  for(int i = idx + 1; i < m; i++) {
    if(p.find(i) == p.end()) {
      p.insert(i);
      get_ptn(n, m, p, ptn);
      p.erase(i);
    }
  }
}

int main() {
  ll n, m, k;
  cin >> n >> m >> k;

  vector<vector<ll>> g;
  for(int i = 0; i < m; i++) {
    ll u, v, w;
    cin >> u >> v >> w;
    g.push_back({u, v, w});
  }

  vector<set<ll>> ptn;
  get_ptn(n - 1, m, set<ll>(), ptn);

  ll ans = INF;
  for(auto p : ptn) {
    UnionFind uf(n + 1);
    for(auto i : p) {
      uf.merge(g[i][0], g[i][1]);
    }

    bool check = true;
    for(int i = 1; i <= n; i++) {
      for(int j = i + 1; j <= n; j++) {
        if(uf.find(i) != uf.find(j)) {
          check = false;
        }
      }
    }
    if(!check) continue;

    ll sum = 0;
    for(auto i : p) {
      sum += g[i][2];
    }

    if(sum % k < ans) {
      ans = sum % k;
    }
  }

  cout << ans << endl;
}
