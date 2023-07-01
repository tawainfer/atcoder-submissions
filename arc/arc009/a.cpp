// https://atcoder.jp/contests/arc009/submissions/28676204

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, a, b; cin >> n;
  n = 0;
  while(cin >> a >> b) n += a * b;
  cout << floor(1.05 * n) << "\n";
}
