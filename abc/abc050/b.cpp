// https://atcoder.jp/contests/abc050/submissions/29162790

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, p, x, sum = 0; cin >> n;
  int t[n];
  for(int i = 0; i < n; i++) {
    cin >> t[i];
    sum += t[i];
  }
  cin >> m;
  while(cin >> p >> x) cout << sum - t[p-1] + x << "\n";
}
