#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  for(auto &z : a) cin >> z;

  vector<int> b(m, 0);

  for(int i = 0; i < n; i++) {
    vector<int> x(m);
    for(auto &z : x) cin >> z;
    for(int j = 0; j < m; j++) {
      b[j] += x[j];
    }
  }

  for(int i = 0; i < m; i++) {
    if(b[i] < a[i]) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}