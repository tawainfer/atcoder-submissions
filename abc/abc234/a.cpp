// https://atcoder.jp/contests/abc234/submissions/28401817

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  long long f1 = t * t + 2 * t + 3;
  long long f2 = f1 + t;
  long long f3 = (f2) * (f2) + 2 * (f2) + 3;
  long long f4 = f1 * f1 + 2 * f1 + 3;
  long long f5 = (f3 + f4) * (f3 + f4) + 2 * (f3 + f4) + 3;
  cout << f5;
}
