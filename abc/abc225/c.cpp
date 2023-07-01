// https://atcoder.jp/contests/abc225/submissions/37535128

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  int b[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> b[i][j];

      if(i == 0) {
        if(j == 0) {
          if((b[i][j] % 7) < 0 || 7 <= (b[i][j] % 7)) {
            cout << "No";
            return 0;
          }
        } else {
          if(!(b[i][j - 1] + 1 == b[i][j] && ((b[i][j - 1] - 1) % 7) < (b[i][j] - 1) % 7)) {
            cout << "No";
            return 0;
          }
        }
      } else {
        if(b[i - 1][j] + 7 != b[i][j]) {
          cout << "No";
          return 0;
        }
      }
    }
  }

  cout << "Yes";
  return 0;
}
