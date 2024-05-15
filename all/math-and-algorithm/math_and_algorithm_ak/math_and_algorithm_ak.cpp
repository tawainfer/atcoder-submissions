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
#define y0 y20210831 // Hello, World
#define y1 y20220320 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll x, n; cin >> n;
  ll a[200009] = {0};
  for(ll i = 2; i <= n; i++) {
    cin >> x;
    a[i] = a[i-1] + x;
  }

  ll b[200009] = {0};
  ll m; cin >> m;
  reps(i, m) cin >> b[i];

  ll ans = 0;
  for(ll i = 2; i <= m; i++) ans += abs(a[b[i-1]] - a[b[i]]);
  cout << ans;
}