// https://atcoder.jp/contests/abc182/submissions/28214937

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, max = 0, maxcnt = 0, ans = 0, cnt = 0; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(max < a[i]) max = a[i];
  }
  for(int i = 2; i <= max; i++) {
    cnt = 0;
    for(int k = 0; k < n; k++) {
      if(a[k] % i == 0) {
        cnt++;
      }
    }
    if(cnt > maxcnt) {      
      maxcnt = cnt;
      ans = i;
    }
  }
  cout << ans;
}
