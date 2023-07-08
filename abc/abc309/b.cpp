// https://atcoder.jp/contests/abc309/submissions/43352423

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  char a[n][n];
  char b[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
      if(!(i == 0 || j == 0 || i == n - 1 || j == n - 1)) b[i][j] = a[i][j];
    }
  }

  for(int i = 0; i < n - 1; i++) b[0][i + 1] = a[0][i];
  for(int i = 0; i < n - 1; i++) b[i + 1][n - 1] = a[i][n - 1];
  for(int i = n - 1; i > 0; i--) b[n - 1][i - 1] = a[n - 1][i];
  for(int i = n - 1; i > 0; i--) b[i - 1][0] = a[i][0];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << b[i][j];
    }
    cout << endl;
  }
}
