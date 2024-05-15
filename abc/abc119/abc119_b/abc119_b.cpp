#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  double x, ans = 0.000000;
  string u;
  while(n--) {
    cin >> x >> u;
    if(u == "BTC") ans += x * 380000.000000;
    else ans += x;
  }
  cout << fixed << setprecision(10);
  cout << ans;
}