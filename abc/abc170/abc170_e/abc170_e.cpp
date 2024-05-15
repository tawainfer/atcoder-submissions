#include <bits/stdc++.h>
using namespace std;
const int MAX = 200000;

int main() {
  int n, q;
  cin >> n >> q;

  vector<multiset<int>> g(MAX + 1);
  vector<int> rate(n);
  vector<int> team(n);

  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    rate[i] = a;
    team[i] = b;
    g[b].insert(a);
  }

  multiset<int> all;
  for(int i = 1; i <= MAX; i++) {
    if(g[i].size() == 0) continue;
    auto iter = g[i].end();
    iter--;
    all.insert((*iter));
  }

  for(int _ = 0; _ < q; _++) {
    int c, d;
    cin >> c >> d;
    c--;

    if(g[d].size() > 0) {
      auto iter = g[d].end();
      iter--;
      all.erase(all.find((*iter)));
    }
    if(g[team[c]].size() > 0) {
      auto iter = g[team[c]].end();
      iter--;
      all.erase(all.find((*iter)));
    }

    g[d].insert(rate[c]);
    g[team[c]].erase(g[team[c]].find(rate[c]));

    if(g[d].size() > 0) {
      auto iter = g[d].end();
      iter--;
      all.insert((*iter));
    }
    if(g[team[c]].size() > 0) {
      auto iter = g[team[c]].end();
      iter--;
      all.insert((*iter));
    }

    team[c] = d;
    cout << (*all.begin()) << endl;
  }
}