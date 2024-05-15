#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, a, b; cin >> n >> m >> a >> b;
  int c[m];
  for(int i = 0; i < m; i++) cin >> c[i];
  int k = 0;
  for(; k < m && n >= 0; k++) {
    if(n <= a) n += b;
    n -= c[k];
    if(n < 0) {
      cout << k + 1 << "\n";
      return 0;
    }
  }
  cout << "complete" << "\n";
}