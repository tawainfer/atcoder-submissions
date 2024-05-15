#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, ans = 0; cin >> n >> k;
  int p[n];
  for(int i = 0; i < n; i++) cin >> p[i];
  sort(p, p + n);
  for(int i = 0; i < k; i++) ans += p[i];
  cout << ans;
}