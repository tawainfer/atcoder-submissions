// https://atcoder.jp/contests/abc298/submissions/40648766

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool check = true;
  int a[n + 1][n + 1];
  int b[n + 1][n + 1];
  for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >> a[i][j];
  for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >> b[i][j];

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(a[i][j] == 1 && b[i][j] == 0) check = false;
      if(i == n && j == n && check) {
        cout << "Yes";
        return 0;
      }
    }
  }

  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <= n; j++) {
  //     cout << a[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;

  int c[n + 1][n + 1];
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      c[n + 1 - j][i] = a[i][j];
    }
  }

  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <= n; j++) {
  //     cout << c[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;
  
  check = true;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(c[i][j] == 1 && b[i][j] == 0) check = false;
      if(i == n && j == n && check) {
        cout << "Yes";
        return 0;
      }
    }
  }


  int d[n + 1][n + 1];
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      d[n + 1 - j][i] = c[i][j];
    }
  }

  check = true;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(d[i][j] == 1 && b[i][j] == 0) check = false;
      if(i == n && j == n && check) {
        cout << "Yes";
        return 0;
      }
    }
  }

  int e[n + 1][n + 1];
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      e[n + 1 - j][i] = d[i][j];
    }
  }

  check = true;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(e[i][j] == 1 && b[i][j] == 0) check = false;
      if(i == n && j == n && check) {
        cout << "Yes";
        return 0;
      }
    }
  }

  cout << "No";
}
