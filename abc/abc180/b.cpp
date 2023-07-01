// https://atcoder.jp/contests/abc180/submissions/28669959

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  double m = 0, y = 0, c = 0; cin >> n;
  double x[n];
  for(int i = 0; i < n; i++) {
    cin >> x[i];
    m += abs(x[i]);
    y += pow(x[i], 2);
    x[i] = abs(x[i]);
  }
  sort(x, x + n);
  reverse(x, x + n);
  cout << fixed << setprecision(10) << m << "\n" << sqrt(y) << "\n" << x[0];
}
