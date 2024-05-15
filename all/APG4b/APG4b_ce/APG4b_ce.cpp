#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, n, m; cin >> n >> m;
  char r[n][n];
  for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) r[i][j] = '-';
  while(cin >> a >> b) {
    r[a-1][b-1] = 'o';
    r[b-1][a-1] = 'x';
  }
  for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) {
    cout << r[i][j];
    if(j == n - 1) cout << "\n";
    else cout << " ";
  }
}