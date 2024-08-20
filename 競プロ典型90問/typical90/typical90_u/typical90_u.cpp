#include <bits/stdc++.h>
#include <atcoder/scc>
using namespace std;
using namespace atcoder;

int main() {
  int n, m;
  cin >> n >> m;

  scc_graph g(n + 1);
  for(int _ = 0; _ < m; _++) {
    int a, b;
    cin >> a >> b;
    g.add_edge(a, b);
  }

  long long ans = 0;
  auto scc = g.scc();
  for(auto v : scc) {
    ans += v.size() * (v.size() - 1) / 2;
  }

  cout << ans;
}