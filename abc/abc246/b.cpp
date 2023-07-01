// https://atcoder.jp/contests/abc246/submissions/30641682

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  double x, y; cin >> x >> y;
  double z = sqrt(x * x + y * y); 
  double a = x / z;
  double b = y / z;
  cout << fixed << setprecision(15) << a << " " << b;
}
