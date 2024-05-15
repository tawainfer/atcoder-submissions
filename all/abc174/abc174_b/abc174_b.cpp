#include <bits/stdc++.h>
using namespace std;
int main() {
  double n, d, x, y, ans = 0; cin >> n >> d;
  while(cin >> x >> y) if(sqrt(pow(x, 2) + pow(y, 2)) <= d) ans++;
  cout << ans;
}