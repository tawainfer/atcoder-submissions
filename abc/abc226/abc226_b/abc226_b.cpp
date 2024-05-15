#include <bits/stdc++.h>
using namespace std;
int main() {
  int l, n; cin >> n;
  set<vector<int>> vec;
  while(n--) {
    cin >> l;
    vector<int> v(l);
    for(auto& x : v) cin >> x;
    vec.insert(v);
  }
  cout << vec.size();
}