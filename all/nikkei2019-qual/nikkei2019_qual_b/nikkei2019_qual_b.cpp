#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  string a, b, c; cin >> n >> a >> b >> c;
  for(int i = 0; i < n; i++) {
    if(a[i] != b[i] && b[i] != c[i] && c[i] != a[i]) ans += 2;
    else if(a[i] == b[i] && b[i] == c[i]) ans += 0;
    else ans++;
  }
  cout << ans;
}