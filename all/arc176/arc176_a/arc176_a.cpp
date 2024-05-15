#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> cr(n + 1, 0);
  vector<int> cc(n + 1, 0);
  vector<set<int>> g(n + 1);
  vector<int> a(m + 1), b(m + 1);
  for(int i = 1; i <= m; i++) {
    cin >> a[i] >> b[i];
    cr[a[i]]++;
    cc[b[i]]++;
    g[a[i]].insert(b[i]);
  }

  set<pair<int, int>> se;
  for(int i = 1; i <= n; i++) {
    if(cr[i] < m) {
      se.insert(make_pair(-cr[i], i));
    }
  }

  set<pair<int, int>> se2;
  for(int i = 1; i <= n; i++) {
    if(cc[i] < m) {
      se2.insert(make_pair(cc[i], i));
    }
  }

  int cnt = 0;
  while(!se.empty()) {
    int ct = -(*se.begin()).first;
    int cp = (*se.begin()).second;
    se.erase(se.begin());

    auto iter = se2.begin();
    while(g[cp].find((*iter).second) != g[cp].end()) iter++;

    int et = (*iter).first;
    int ep = (*iter).second;
    se2.erase(iter);

    g[cp].insert(ep);
    if(et + 1 < m) se2.insert(make_pair(et + 1, ep));
    if(ct + 1 < m) se.insert(make_pair(-(ct + 1), cp));

    // cnt++;
    // cout << cnt << endl;
    // for(auto p : se) {
    //   cout << "(" << p.first << "," << p.second << ") ";
    // }
    // cout << endl;
    // for(auto p : se2) {
    //   cout << "(" << p.first << "," << p.second << ") ";
    // }
    // cout << endl;
  }


  int ans = 0;
  for(int i = 1; i <= n; i++) {
    for(auto x : g[i]) {
      // cout << i << " " << x << endl;
      ans++;
    }
  }

  cout << ans << endl;
  for(int i = 1; i <= n; i++) {
    for(auto x : g[i]) {
      cout << i << " " << x << endl;
      // ans++;
    }
  }
}