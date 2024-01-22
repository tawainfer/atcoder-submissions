// https://atcoder.jp/contests/abc337/submissions/49532115

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int m = 1;
  int base = 2;
  while(base < n) {
    base *= 2;
    m++;
  }
  cout << m << endl;

  vector<set<int>> ptn(m);
  map<int, set<int>> ma;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(i & (1 << j)) {
        ptn[j].insert(i);
      }
    }
  }

  for(int i = 0; i < m; i++) {
    cout << ptn[i].size() << " ";
    for(auto x : ptn[i]) {
      cout << x + 1 << " ";
    }
    cout << endl;
  }

  string s;
  cin >> s;

  int x = 0;
  base = 1;
  for(int i = 0; i < m; i++) {
    if(s[i] == '1') {
      x += base;
    }
    base *= 2;
  }

  cout << x + 1 << endl;
}
