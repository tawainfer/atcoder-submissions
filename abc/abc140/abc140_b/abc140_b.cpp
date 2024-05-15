#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0, bef = -1; cin >> n;
  int a[n], b[n], c[n-1];
  for(int&A:a) cin >> A;
  for(int&B:b) cin >> B;
  for(int&C:c) cin >> C;
  for(int i = 0; i < n; i++) {
    ans += b[a[i]-1];
    if(i && a[i] - a[i-1] == 1) ans += c[a[i-1]-1];
  }
  cout << ans;
}