// https://atcoder.jp/contests/abc189/submissions/29229839

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, v, p, sum = 0; cin >> n >> x;
  for(int i = 1; cin >> v >> p; i++) {
    sum += v * p;
    if(sum > x * 100) {
      cout << i;
      return 0;
    }
  }
  cout << -1;
}
