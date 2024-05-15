#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> a[n];
  for(int i = 0; i < n; i++) {
    int c;
    cin >> c;

    for(int j = 0; j < c; j++) {
      int x;
      cin >> x;
      a[i].insert(x);
    }
  }

  int x;
  cin >> x;

  vector<vector<int>> cnt(109);
  for(int i = 0; i < n; i++) {
    if(a[i].find(x) != a[i].end()) {
      cnt[(int)a[i].size()].push_back(i + 1);
    }
  }

  for(int i = 1; i < 109; i++) {
    if(!cnt[i].empty()) {
      cout << cnt[i].size() << endl;
      for(int z : cnt[i]) cout << z << " ";
      return 0;
    }
  }

  cout << 0 << endl;
}