#include <bits/stdc++.h>
using namespace std;
int main() {
  int v, w, x, y, z, ans = 0; cin >> v;
  while(cin >> v >> w >> x >> y >> z) if(v + w + x + y + z < 20) ans++;
  cout << ans << "\n";
}