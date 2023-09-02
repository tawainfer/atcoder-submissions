// https://atcoder.jp/contests/abc194/submissions/45114034

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  double ans = 0;
  for(int i = n - 1; i > 0; i--) {
    ans += n / (double)i;
  }

  cout << fixed << setprecision(7) << ans;
  return 0;
}
