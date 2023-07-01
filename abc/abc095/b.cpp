// https://atcoder.jp/contests/abc095/submissions/28345271

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, min = pow(10, 9), cnt = 0, sum = 0; cin >> n >> x;
  while(cin >> n) {
    cnt++;
    sum += n;
    if(min > n) min = n;
  }
  while(sum <= x) {
    cnt++;
    sum += min;
  }
  cout << cnt-1;
}
