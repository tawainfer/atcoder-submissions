#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<pair<int, int>> p;
  int a, b;
  while(cin >> a >> b) p.push_back(make_pair(a, b));

  int ans = 0;
  for(int l = 1; l <= 100; l++) {
    int r = l + k;

    vector<pair<int, int>> t;
    for(int i = 0; i < n; i++) {
      if(l <= p[i].first && p[i].first <= r) t.push_back(make_pair(p[i].second, p[i].first));
    }
    sort(t.begin(), t.end());

    for(int l2 = 1; l2 <= 100; l2++) {
      int r2 = l2 + k;

      vector<pair<int, int>> t2;
      for(int i = 0; i < t.size(); i++) {
        if(l2 <= t[i].first && t[i].first <= r2) t2.push_back(make_pair(t[i].second, t[i].first));
      }

      ans = max(ans, (int)t2.size());
    }
  }

  cout << ans;
  return 0;
}