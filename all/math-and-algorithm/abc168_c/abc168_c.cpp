#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  const double PI = 3.141592653589793;
  int a, b, h, m;
  cin >> a >> b >> h >> m;

  double angh = 30 * h + 0.5 * m;
  int angm = 6 * m;
  double ang = (angm - angh) * PI / 180;
  cout << fix(10) << sqrt(a * a + b * b - 2 * b * a * cos(ang));
}