// https://atcoder.jp/contests/abc236/submissions/28735175

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, cnt = 0; cin >> n;
  if(n == 1) {
    cout << 1;
    return 0;
  }
  int a[4 * n - 1];
  for(int i = 0; i < 4 * n - 1; i++) cin >> a[i];
  sort(a, a + (4 * n - 1));
  for(int i = 0; i < 4 * n - 1; i++) {
    if(i % 4 == 0) {
      cnt++;
    } else {
      if(a[i] == a[i-1]) cnt++;
    }
    if(i % 4 == 3) {
      if(cnt != 4) {
        cout << a[i-1];
        return 0;
      } else {
        cnt = 0;
      }
    }
  }
  cout << a[4 * n - 2];
}
