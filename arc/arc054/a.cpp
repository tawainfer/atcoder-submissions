// https://atcoder.jp/contests/arc054/submissions/33215540

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  double l, x, y, s, g;
  cin >> l >> x >> y >> s >> g;

  if(s == g) {
    cout << 0;
    return 0;
  }

  double right, wrong;
  if(s < g) right = g - s;
  else right = l - s + g;
  wrong = l - right;

  double ans;
  if(x < y) ans = min(right / (x + y), wrong / (y - x));
  else ans = right / (x + y);

  cout << fix(7) << ans << "\n";
  return 0;
}
