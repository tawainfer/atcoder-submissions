#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  int q;
  cin >> q;

  map<int, pair<int, int>> m;
  for(int i = 0; i < n; i++) {
    m[a[i]] = make_pair((i == 0 ? -1 : a[i - 1]), (i == n - 1 ? -1 : a[i + 1]));
  }

  for(int _ = 0; _ < q; _++) {
    int t;
    cin >> t;

    if(t == 1) {
      int x, y;
      cin >> x >> y;

      m[y].first = x;
      m[y].second = m[x].second;
      m[m[x].second].first = y;
      m[x].second = y;
    } else if(t == 2) {
      int x;
      cin >> x;

      m[m[x].first].second = m[x].second;
      m[m[x].second].first = m[x].first;
      m[x] = make_pair(0, 0);
    }
  }

  int x;
  for(auto p : m) {
    if(p.second.first == -1) {
      x = p.first;
      break;
    }
  }

  while(1) {
    cout << x << " ";
    if(m[x].second == -1) break;
    x = m[x].second;
  }
}