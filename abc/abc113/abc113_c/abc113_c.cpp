#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> p(m), y(m);
  map<int, vector<int>> check;
  for(int i = 0; i < m; i++) {
    cin >> p[i] >> y[i];
    check[p[i]].push_back(y[i]);
  }
  
  for(auto p : check) {
    sort(check[p.first].begin(), check[p.first].end());
  }

  for(int i = 0; i < m; i++) {
    int ty = distance(check[p[i]].begin(), lower_bound(check[p[i]].begin(), check[p[i]].end(), y[i]));
    printf("%06d%06d\n", p[i], ty + 1);
  }
}