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

  int x1, y1, r, x2, y2, x3, y3;
  cin >> x1 >> y1 >> r;
  cin >> x2 >> y2 >> x3 >> y3;
  x2 -= x1;
  y2 -= y1;
  x3 -= x1;
  y3 -= y1;
  if(x2 <= -r && y2 <= -r && r <= x3 && r <= y3) cout << "NO\n";
  else cout << "YES\n";
  int d1 = x2 * x2 + y2 * y2, d2 = x3 * x3 + y2 * y2;
  int d3 = x3 * x3 + y3 * y3, d4 = x2 * x2 + y3 * y3;
  int r2 = r * r;
  if(d1 <= r2 && d2 <= r2 && d3 <= r2 && d4 <= r2) cout << "NO\n";
  else cout << "YES\n";
}