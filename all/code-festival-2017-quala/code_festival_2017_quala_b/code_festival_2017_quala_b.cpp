#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  bool ans = false;

  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= m; j++) {
      if(m * i + n * j - i * j - i * j == k) {
        ans = true;
      }
    }
  }

  cout << (ans ? "Yes" : "No");
  return 0;
}