#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long n, ans = 0; cin >> n;
  vector<long long> a(1e5, 0);
  while(cin >> n) a[n]++;
  
  for(int i = 1; i <= 49999; i++) ans += a[i] * a[1e5 - i];
  ans += a[50000] * (a[50000] - 1) / 2;
  cout << ans;
}