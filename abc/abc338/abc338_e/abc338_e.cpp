#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, bool>> g(2 * n + 1);
  for(int _ = 0; _ < n; _++) {
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    g[a] = make_pair(b, true);
    g[b] = make_pair(a, false);
  }

  set<int> se;
  for(int i = 1; i <= 2 * n; i++) {
    if(g[i].second) {
      if(se.size() >= 1 && (*se.begin()) < g[i].first) {
        cout << "Yes";
        return 0;
      }
      se.insert(g[i].first);
    } else {
      se.erase(i);
    }
  }

  cout << "No";
}