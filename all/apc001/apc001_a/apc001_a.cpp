#include <bits/stdc++.h>
using namespace std;
int main() {
  long long x, y, ans = -1;
  cin >> x >> y;
  if(x % y != 0) ans = x;
  cout << ans;
}