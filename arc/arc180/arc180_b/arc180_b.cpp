#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> p(n + 1);
  vector<int> idx(n + 1, -1);
  for(int i = 1; i <= n; i++) {
    cin >> p[i];
    idx[p[i]] = i;
  }

  vector<pair<int, int>> ans;
  set<pair<int, int>> se;
  while(1) {
    bool check = false;
    for(int x = 1; x <= n; x++) {
      int i = idx[x];

      for(int y = x - 1; y >= 1; y--) {
        int j = idx[y];

        pair<int, int> pa = make_pair(i, j);
        if(x > y && i <= j - k && se.find(pa) == se.end()) {
          check = true;
          ans.push_back(pa);
          se.insert(pa);
          swap(idx[x], idx[y]);
          swap(p[i], p[j]);
          break;
        }
      }
      if(check) break;
    }
    if(!check) break;
  }

  cout << ans.size() << endl;
  for(auto pa : ans) {
    cout << pa.first << " " << pa.second << endl;
  }
}