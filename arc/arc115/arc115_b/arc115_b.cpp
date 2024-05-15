#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int c[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> c[i][j];

  if(n == 1) {
    cout << "Yes\n";
    cout << c[0][0] << "\n0\n";
    return 0;
  }

  int d;
  int pos = -1;
  int mi = 2e9;

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (c[i][j] < mi) {
        pos = j;
        mi = c[i][j];
      }

      if (j == 0)
        d = c[i][j] - c[i - 1][j];
      else {
        if ((c[i][j] - c[i - 1][j]) != d) {
          cout << "No";
          return 0;
        }
      }
    }
  }

  for (int j = 1; j < n; j++) {
    for (int i = 0; i < n; i++) {
      if (i == 0)
        d = c[i][j] - c[i][j - 1];
      else {
        if ((c[i][j] - c[i][j - 1]) != d) {
          cout << "No";
          return 0;
        }
      }
    }
  }

  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(i == 0) b[j] = c[0][j] - c[0][pos];
      c[i][j] -= b[j];
    }
  }
  for(int i = 0; i < n; i++) a[i] = c[i][0];

  cout << "Yes\n";
  for(auto &z : a) cout << z << " ";
  cout << "\n";
  for(auto &z : b) cout << z << " ";
  return 0;
}