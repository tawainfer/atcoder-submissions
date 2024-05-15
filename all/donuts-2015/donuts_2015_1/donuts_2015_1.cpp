#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  double r, d; cin >> r >> d;
  const double PI = 3.141592653589793;
  cout << fixed << setprecision(15) << r * r * PI * PI * 2 * d;
}