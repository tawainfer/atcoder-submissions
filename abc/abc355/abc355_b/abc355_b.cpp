#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;

  set<int> sa;
  for(auto x : a) {
    sa.insert(x);
  }

  vector<int> c;
  for(auto x : a) c.push_back(x);
  for(auto x : b) c.push_back(x);
  sort(c.begin(), c.end());

  for(int i = 1; i < c.size(); i++) {
    if(sa.find(c[i - 1]) != sa.end() && sa.find(c[i]) != sa.end()) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}