// https://atcoder.jp/contests/arc147/submissions/46025074

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> p(n);
  for(auto &z : p) cin >> z;

  deque<pair<char, int>> ans;
  for(int i = n; i >= 1; i--) {
    int cp;
    for(int j = 0; j < n; j++) {
      if(p[j] == i) {
        cp = j;
        break;
      }
    }
    if(i % 2 != cp % 2) continue;

    while(cp - 2 >= 0) {
      // if(p[cp - 2] % 2 == p[cp] % 2) break;
      ans.push_back(make_pair('B', (cp - 2) + 1));
      swap(p[cp - 2], p[cp]);
      cp -= 2;
    }
  }

  for(int i = 0; i < n; i += 2) {
    if(i == n - 1) break;
    if(p[i] % 2 != 0) break;
    ans.push_back(make_pair('A', i + 1));
    swap(p[i], p[i + 1]);
  }

  for(int i = 1; i <= n; i++) {
    int cp;
    for(int j = 0; j < n; j++) {
      if(p[j] == i) {
        cp = j;
        break;
      }
    }

    while(cp < (i - 1)) {
      ans.push_back(make_pair('B', cp + 1));
      swap(p[cp], p[cp + 2]);
      cp += 2;
    }

    while((i - 1) < cp) {
      ans.push_back(make_pair('B', (cp - 2) + 1));
      swap(p[cp - 2], p[cp]);
      cp -= 2;
    }
  }

  cout << ans.size() << endl;
  for(auto z : ans) {
    cout << z.first << " " << z.second << endl;
  }
}
