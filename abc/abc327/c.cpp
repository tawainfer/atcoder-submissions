// https://atcoder.jp/contests/abc327/submissions/47231286

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> f(9, vector<int>(9));
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      cin >> f[i][j];
    }
  }

  vector<set<int>> r(9);
  vector<set<int>> c(9);
  vector<set<int>> p(9);
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      r[i].insert(f[i][j]);
      c[j].insert(f[i][j]);
      p[i / 3 * 3 + j / 3].insert(f[i][j]);
    }
  }

  for(auto z : r) {
    if(z.size() != 9) {
      cout << "No";
      return 0;
    }
  }

  for(auto z : c) {
    if(z.size() != 9) {
      cout << "No";
      return 0;
    }
  }

  for(auto z : p) {
    if(z.size() != 9) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}
