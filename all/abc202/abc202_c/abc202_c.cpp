#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<int> a(n), b(n), c(n), d(n), cnt(n, 0);
  for(auto& z : a) cin >> z;
  for(auto& z : b) cin >> z;
  for(auto& z : c) cin >> z;
  for(int i = 0; i < n; i++) d[i] = b[c[i] - 1];
  for(int i = 0; i < n; i++) cnt[d[i]]++;

  long long ans = 0;
  for(int i = 0; i < n; i++) ans += cnt[a[i]];
  cout << ans;
 }