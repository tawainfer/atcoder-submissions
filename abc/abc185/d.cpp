// https://atcoder.jp/contests/abc185/submissions/33756625

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

  ll n, m;
  cin >> n >> m;

  if(m == 0) {
    cout << 1;
    return 0;
  }

  vector<ll> a(m);
  fore(z, a) cin >> z;
  sort(all(a));

  vector<ll> diff;
  ll l = 0, r = 0;
  if((a.front() - 1) > 0) l = a.front() - 1;
  if((n - a.back()) > 0) r = n - a.back();

  if(l != 0) diff.push_back(l);
  if(r != 0) diff.push_back(r);

  rep(i, 1, m) {
    ll d = a[i] - a[i - 1] - 1;
    if(d > 0) diff.push_back(d);
  }
  sort(all(diff));

  if(diff.empty()) {
    cout << 0;
    return 0;
  }

  ll mi = diff.front();
  ll ans = 0;

  fore(z, diff) {
    ans += (z + mi - 1) / mi;
    //cout << z << " " << ans << endl; 
  }

  cout << ans;
  return 0;
}
