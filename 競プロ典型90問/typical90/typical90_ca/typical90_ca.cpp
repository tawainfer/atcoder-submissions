#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define reps(i, a, b) for(ll i = a; i <= b; i++)
#define rrep(i, a, b) for(ll i = a; i > b; i--)
#define rreps(i, a, b) for(ll i = a; i >= b; i--)
#define repv(i, a, b, c) for(ll i = a; i < b; i += c)
#define repsv(i, a, b, c) for(ll i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(ll i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(ll i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll h, w;
  cin >> h >> w;

  ll a[h][w], b[h][w];
  rep(i, 0, h) rep(j, 0, w) cin >> a[i][j];
  rep(i, 0, h) rep(j, 0, w) cin >> b[i][j];

  vector<ll> y = {0, 0, 1, 1};
  vector<ll> x = {0, 1, 0, 1};

  ll sum = 0;
  rep(i, 0, h - 1) rep(j, 0, w - 1) {
    ll d = b[i][j] - a[i][j];
    rep(k, 0, 4) a[i + y[k]][j + x[k]] += d;
    sum += abs(d);
  }

  bool ans = true;
  rep(i, 0, h) if(a[i][w - 1] != b[i][w - 1]) ans = false;
  rep(i, 0, w) if(a[h - 1][i] != b[h - 1][i]) ans = false;

  if(ans) cout << "Yes\n" << sum;
  else cout << "No";
  return 0;
}