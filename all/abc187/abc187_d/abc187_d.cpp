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

  vector<ll> a(n), b(n), c(n);
  ll sum = 0;
  rep(i, 0, n) {
    cin >> a[i] >> b[i];
    sum += a[i];
    c[i] = 2 * a[i] + b[i];
  }

  sort(all(c));
  reverse(all(c));

  ll ans = 0;
  rep(i, 0, n) {
    ans++;
    sum -= c[i];
    //cout << sum << endl;
    if(sum < 0) break;
  }

  cout << ans;
  return 0;
}