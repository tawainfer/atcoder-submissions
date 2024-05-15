#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  int d[n];
  int k = 0;
  for(int i = 0; i < n; i++) cin >> d[i];
  for(int i = 0; i < n - 1; i++) {
    k = i + 1;
    for(; k < n; k++) {
      ans += d[i] * d[k];
    }
  }
  cout << ans;
}