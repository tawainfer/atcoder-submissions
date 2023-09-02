// https://atcoder.jp/contests/abc318/submissions/45139310

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<bool>> f(109, vector<bool>(109, false));
  for(int k = 0; k < n; k++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for(int i = a; i < b; i++) {
      for(int j = c; j < d; j++) {
        f[i][j] = true;
      }
    }
  }

  int ans = 0;
  for(int i = 0; i < 109; i++) {
    for(int j = 0; j < 109; j++) {
      if(f[i][j]) {
        ans++;
        // cout << i << " " << j << endl;
      }
    }
  }

  // for(int i = 0; i < 10; i++) {
  //   for(int j = 0; j < 10; j++) {
  //     cout << f[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  cout << ans;
  return 0;
}
