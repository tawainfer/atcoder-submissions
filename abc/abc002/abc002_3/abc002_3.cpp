#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  double a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
  a -= e;
  c -= e;
  b -= f;
  d -= f;
  e = 0;
  f = 0;
  cout << fixed << setprecision(5) << abs(a * d - b * c) / 2;
}