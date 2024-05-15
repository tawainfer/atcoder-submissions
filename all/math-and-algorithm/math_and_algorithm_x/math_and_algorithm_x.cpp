#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  double n, ans = 0, p, q; cin >> n;
  while(cin >> p >> q) ans += q / p;
  cout << fixed << setprecision(7) << ans;
}