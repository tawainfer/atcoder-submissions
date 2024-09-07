#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> a(n, vector<int>(n));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i + 1; j++) {
      cin >> a[i][j];
    }
  }

  int x = 1;
  for(int y = 1; y <= n; y++) {
    if(x >= y) {
      x = a[x - 1][y - 1];
    } else {
      x = a[y - 1][x - 1];
    }
  }

  cout << x;
}