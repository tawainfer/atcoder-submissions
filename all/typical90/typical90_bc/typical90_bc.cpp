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

  ll n, p, q;
  cin >> n >> p >> q;

  vector<ll> a(n);
  fore(z, a) cin >> z;

  ll ans = 0;
  rep(i, 0, n) rep(j, i + 1, n) rep(k, j + 1, n) rep(l, k + 1, n)
    rep(m, l + 1, n) {
    if(a[i] * a[j] % p * a[k] % p * a[l] % p * a[m] % p == q) ans++;
  }

  cout << ans;
  return 0;
}