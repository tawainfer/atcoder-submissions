#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, n, ans = 0; cin >> n;
  for(int i = 0; cin >> n; i++) if(n > 10) ans += (n - 10);
  cout << ans;
}