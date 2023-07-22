// https://atcoder.jp/contests/abc311/submissions/43889151

#include <bits/stdc++.h>
#include <atcoder/scc>
using namespace std;
using namespace atcoder;

int main() {
  int n;
  cin >> n;

  vector<int> a(n + 1);
  scc_graph g(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    g.add_edge(i, a[i]);
  }

  auto scc = g.scc();
  for(auto v : scc) {
    if(v.size() == 1) continue;
    cout << v.size() << endl;

    int cp = v[0];
    for(int x : v) {
      cout << cp << " ";
      cp = a[cp];
    }
    return 0;
  }
}
