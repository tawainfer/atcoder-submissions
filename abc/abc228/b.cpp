// https://atcoder.jp/contests/abc228/submissions/27371362

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, ans = 0; cin >> n >> x;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  while(a[x-1] != 0) {
    ans++;
    int k = x;
    x = a[x-1];
    a[k-1] = 0;
  }
  cout << ans;
}
