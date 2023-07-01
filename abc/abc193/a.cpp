// https://atcoder.jp/contests/abc193/submissions/25679191

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  double ans = (double)B / (double)A * 100;
  cout << 100 - ans;
}
