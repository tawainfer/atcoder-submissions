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

  ll n;
  cin >> n;

  vector<ll> m(3);
  cin >> m[0] >> m[1] >> m[2];
  sort(all(m));

  ll a = m[0];
  ll b = m[1];
  ll c = m[2];

  ll ans = 1e9;
  reps(z, 0, 9999) {
    if(c * z > n) break;

    reps(y, 0, 9999) {
      if(c * z + b * y > n) break;

      ll ax = n - b * y - c * z;
      if(ax % a == 0) {
        ll x = ax / a;
        ans = min(ans, x + y + z);
      }
    }
  }

  cout << ans;
  return 0;
}