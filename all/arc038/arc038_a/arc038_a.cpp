#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  reverse(a, a + n);
  for(int i = 0; i < n; i+=2) ans += a[i];
  cout << ans << "\n";
}