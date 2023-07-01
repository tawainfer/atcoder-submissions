// https://atcoder.jp/contests/abc170/submissions/30347436

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long x, n;
  cin >> x >> n;
  vector<int> p(n);
  for(auto& z : p) cin >> z;

  if(n == 0) {
    cout << x;
    return 0;
  }

  for(int i = 0; i < n; i++) {
    if(x == p[i]) break;
    if(i == n - 1) {
      cout << x;
      return 0;
    }
  }
  for(int i = 1; i < 100; i++) {
    for(int j = 0; j < n; j++) {
      if(x - i == p[j]) break;
      if(j == n - 1) {
        cout << x - i;
        return 0;
      }
    }
    for(int j = 0; j < n; j++) {
      if(x + i == p[j]) break;
      if(j == n - 1) {
        cout << x + i;
        return 0;
      }
    }
  }
}
