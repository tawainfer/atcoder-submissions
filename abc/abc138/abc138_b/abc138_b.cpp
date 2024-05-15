#include <bits/stdc++.h>
using namespace std;
int main() {
  double n, a, ans = 0; cin >> n;
  while(cin >> a) ans += 1.0 / a;
  cout << 1 / ans;
}