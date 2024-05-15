#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, a; cin >> n;
  vector<pair<int, int>> p(n);
  for(int i = 1; i <= n; i++) {
    cin >> a;
    p[i-1].first = a;
    p[i-1].second = i;
  }
  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());
  for(auto x : p) cout << x.second << "\n";
}