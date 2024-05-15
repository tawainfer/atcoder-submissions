#include <bits/stdc++.h>
using namespace std;

long long f(long long n, long long k) {
  return min(k - 1, n + n + 1 - k);
}

int main() {
  long long n, k;
  cin >> n >> k;

  long long ans = 0;
  for(long long x = 2; x <= n + n; x++) {
    long long y = x - k;
    if(2 <= y && y <= n + n + 1) ans += f(n, x) * f(n, y);
  }
  
  cout << ans;
  return 0;
}