#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n;
  double ans = 0; cin >> n;
  double a[n], b[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];
  for(int i = 0; i < n; i++) ans += (a[i] + b[i] * 2) / 3;
  cout << fixed << setprecision(4) << ans;
}