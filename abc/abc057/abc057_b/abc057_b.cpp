#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int n, m;
  double min = 1e18, num; cin >> n >> m;
  double a[n], b[n], c[m], d[m];
  for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
  for(int i = 0; i < m; i++) cin >> c[i] >> d[i];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(min > abs(a[i] - c[j]) + abs(b[i] - d[j])) {
        min = abs(a[i] - c[j]) + abs(b[i] - d[j]);
        num = j + 1;
      }
    }
    cout << num << "\n";
    min = 1e18;
  }
}