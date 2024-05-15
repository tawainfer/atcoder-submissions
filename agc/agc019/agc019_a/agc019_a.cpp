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

  ll d[4];
  vector<pair<ll, ll>> p(4);
  rep(i, 0, 4) {
    cin >> d[i];
    d[i] *= 4;
    p[i] = make_pair(d[i] * pow(2, 3 - i), i);
  }
  sort(all(p));

  ll n;
  cin >> n;
  n *= 4;

  ll x;
  ll ans = 0;
  if(n >= 8) {
    x = p[0].first;

    ans += n / 8 * x;
    n %= 8;
  }
  // cout << n << " " << ans << endl;
  if(n >= 4) {
    if(p[0].second != 3) x = p[0].first;
    else x = p[1].first;
    x /= 2;

    ans += n / 4 * x;
    n %= 4;
  }
  // cout << n << " " << ans << endl;
  if(n >= 2) {
    if(p[0].second != 3) x = p[0].first;
    else if(p[1].second != 2) x = p[1].first;
    else x = p[2].first;
    x /= 4;

    ans += n / 2 * x;
    n %= 2;
  }
  // cout << n << " " << ans << endl;
  if(n == 1) {
    ans += d[0];
  }
  // cout << n << " " << ans << endl;
  ans /= 4;
  cout << ans;
  return 0;
}