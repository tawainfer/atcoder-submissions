#include <bits/stdc++.h>
using namespace std;
int main() {
  string ans = "YES";
  int a, b, x;
  cin >> a >> b >> x;
  if(x < a || a + b < x) ans = "NO";
  cout << ans;
}