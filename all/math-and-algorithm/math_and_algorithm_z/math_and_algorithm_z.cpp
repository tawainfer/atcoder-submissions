#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  double n;
  double ans = 0; cin >> n;
  for(int i = 1; i <= n; i++) ans += n / i;
  cout << fixed << setprecision(7) << ans;
}