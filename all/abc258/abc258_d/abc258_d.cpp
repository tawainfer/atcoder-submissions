#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned int
#define ushort unsigned short
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n, x;
  cin >> n >> x;

  vector<ll> a(n), b(n);
  vector<ll> ra(n), rb(n), mib(n);

  ll mi = 1e18;
  ll index = -1;
  rep(i, 0, n) {
    cin >> a[i] >> b[i];
    if(i == 0) {
      ra[0] = a[0];
      rb[0] = b[0];
    } else {
      ra[i] = ra[i - 1] + a[i];
      rb[i] = rb[i - 1] + b[i];
    }

    ll x = b[i];
    if(chmin(mi, x)) index = i;
    mib[i] = index;
  }

  // fore(z, ra) cout << z << " ";
  // cout << endl;

  ll ans = 2e18;
  rep(i, 0, n) {
    if(i + 1 > x) break;
    ll t = ra[i] + rb[i] + (x - i - 1) * b[i];
    chmin(ans, t);
    //cout << i << " " << ans << " " << ra[i] << " " << rb[i] << " " << (x - i - 1) * b[mib[i]] << endl;
  }

  cout << ans;
  return 0;
}