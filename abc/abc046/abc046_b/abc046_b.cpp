#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, k, ans; cin >> n >> k;
  ans = k;
  for(int i = 0; i < n - 1; i++) ans *= (k - 1);
  cout << ans;
}