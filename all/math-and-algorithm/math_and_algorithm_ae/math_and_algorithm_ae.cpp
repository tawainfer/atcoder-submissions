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

  ll ax, ay, bx, by, cx, cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  
  ll BAx = ax - bx, BAy = ay - by;
  ll BCx = cx - bx, BCy = cy - by;
  ll CAx = ax - cx, CAy = ay - cy;
  ll CBx = bx - cx, CBy = by - cy;

  int pattern = 2;
  if(BAx * BCx + BAy * BCy < 0) pattern = 1;
  if(CAx * CBx + CAy * CBy < 0) pattern = 3;

  double ans = 0.0;
  if(pattern == 1) ans = sqrt(BAx * BAx + BAy * BAy);
  if(pattern == 3) ans = sqrt(CAx * CAx + CAy * CAy);
  if(pattern == 2) {
    double s = abs(BAx * CAy - BAy * CAx);
    double bc = sqrt(BCx * BCx + BCy * BCy);
    ans = s / bc;
  }

  cout << fix(7) << ans;
}