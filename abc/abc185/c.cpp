// https://atcoder.jp/contests/abc185/submissions/31412161

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
  ll a = 1, n, p, pp;
  cin >> n;
  p = n - 11;
  pp = 1;
  for(ll i = 0; i < 11; i++) {
    a *= p;
    a /= pp;
    pp++;
    p++;
  }
  cout << a << "\n";
}
