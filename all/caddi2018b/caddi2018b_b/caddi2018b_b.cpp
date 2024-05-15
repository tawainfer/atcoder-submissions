#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, n, h, w, ans = 0; cin >> n >> h >> w;
  while(cin >> a >> b) if(a >= h && b >= w) ans++;
  cout << ans;
}