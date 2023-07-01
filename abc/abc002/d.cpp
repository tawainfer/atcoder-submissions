// https://atcoder.jp/contests/abc002/submissions/42111144

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int x, y;
  set<int> g[n + 1];
  while(cin >> x >> y) {
    g[x].insert(y);
    g[y].insert(x);
  }

  int ans = 0;
  for(int bit = 0; bit < (1 << n); bit++) {
    vector<int> ptn;
    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) ptn.push_back(i + 1);
    }

    bool check = true;
    for(int i = 0; i < (int)ptn.size(); i++) {
      for(int j = i + 1; j < (int)ptn.size(); j++) {
        if(g[ptn[i]].find(ptn[j]) == g[ptn[i]].end()) check = false;
      }
    }

    if(check && ans < ptn.size()) ans = (int)ptn.size();
  }

  cout << ans << endl;
  return 0;
}
