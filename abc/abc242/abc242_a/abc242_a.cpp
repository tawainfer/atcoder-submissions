#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  double a, b, c, x; cin >> a >> b >> c >> x;
  cout << fixed << setprecision(7);
  if(a >= x) cout << 1;
  else if(b >= x) cout << c / (b - (a));
  else cout << 0;
}