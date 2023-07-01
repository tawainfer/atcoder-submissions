// https://atcoder.jp/contests/abc135/submissions/30942916

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fixed fixed << setprecision(20)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
#define y0 y5380520
#define y1 y5380520
using namespace std;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  vector<ll> a(n + 1), b(n);
  fore(z, a) cin >> z;
  fore(z, b) cin >> z;
  rep(i, n) {
    if(b[i] <= a[i]) {
      a[i] -= b[i];
      ans += b[i];
    } else {
      ans += a[i];
      b[i] -= a[i];
      a[i] = 0;
      ans += min(b[i], a[i + 1]);
      a[i + 1] -= b[i];
      if(a[i + 1] < 0) a[i + 1] = 0;
    }
  }
  cout << ans;
}
