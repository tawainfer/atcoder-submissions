#include <bits/stdc++.h>
using namespace std;

void cnt(vector<int> &v1, vector<int> &v2, set<int> &cnt) {
  for(int x : v1) {
    for(int y : v2) {
      cnt.insert(x + y);
    }
  }
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n), b(n), c(n), d(n);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;
  for(auto &z : c) cin >> z;
  for(auto &z : d) cin >> z;

  set<int> cnt_ab, cnt_cd;
  cnt(a, b, cnt_ab);
  cnt(c, d, cnt_cd);

  for(int x : cnt_ab) {
    if(cnt_cd.find(k - x) != cnt_cd.end()) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}