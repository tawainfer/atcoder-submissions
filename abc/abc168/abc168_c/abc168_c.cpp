#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  const double PI = 3.141592653589793;
  double h;
  int a, b, m; cin >> a >> b >> h >> m;
  h *= 30;
  h += 0.5 * m;
  m *= 6;
  double radc = min(abs(h - m), 360 - abs(h - m)) * PI / 180;
  double c = sqrt(a * a + b * b - 2 * a * b * cos(radc));
  cout << fixed << setprecision(10) << c;
}