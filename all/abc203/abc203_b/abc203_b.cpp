#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, ans = 0; cin >> n >> k;
  for(int i = 1; i <= n; i++) for(int j = 1; j <= k; j++) ans += (100 * i + j);
  cout << ans;
}