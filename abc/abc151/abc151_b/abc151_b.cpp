#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, m; cin >> n >> k >> m;
  int x = n * m;
  for(int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    x -= a;
  }
  if(x < 0) cout << 0;
  else if (x > k) cout << -1;
  else cout << x;
}
