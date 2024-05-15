#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  vector<pair<int, string>> v;
  string s; int t;
  while(cin >> s >> t) v.push_back({t, s});
  sort(v.begin(), v.end());
  cout << v[v.size() - 2].second;
}