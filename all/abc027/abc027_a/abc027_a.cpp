#include <bits/stdc++.h>
using namespace std;
int main() {
  int l, m, n;
  cin >> l >> m >> n;
  int r = 2 * (min({l, m, n}) + max({l, m, n}));
  cout << r - l - m - n << endl;
}