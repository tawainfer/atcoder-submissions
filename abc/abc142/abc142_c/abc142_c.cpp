#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  int n, a; cin >> n;
  vector<pair<int, int>> v;
  
  for(int i = 1; i <= n; i++) {
    cin >> a;
    v.push_back(make_pair(a, i));
  }
  
  sort(v.begin(), v.end());
  for(auto x : v) cout << x.second << "\n";
}