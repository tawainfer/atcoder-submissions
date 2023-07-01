// https://atcoder.jp/contests/abc010/submissions/31397211

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
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  double xs, ys, xg, yg;
  int t, v, n;
  cin >> xs >> ys >> xg >> yg >> t >> v >> n;
  double dis = t * v;

  double x, y;
  while(cin >> x >> y) {
    double dis1 = sqrt((xs - x) * (xs - x) + (ys - y) * (ys - y));
    double dis2 = sqrt((xg - x) * (xg - x) + (yg - y) * (yg - y));

    if(dis >= dis1 + dis2) {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";
}
