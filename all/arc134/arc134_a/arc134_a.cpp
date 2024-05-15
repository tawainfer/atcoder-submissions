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
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  ll l, w;
  cin >> l >> w;
  ll r = 0;
  vector<ll> a(n + 1, l);
  for(int i = 0; i < n; i++) cin >> a[i];
  ll ans = 0;
  fore(z, a) {
    if(z > r) ans += (z - r + w - 1) / w;
    r = z + w;
  }
  cout << ans;
}