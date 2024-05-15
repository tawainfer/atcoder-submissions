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
  set<pair<ll, ll>> ans;

  vector<ll> x(n), y(n);
  rep(i, 0, n) cin >> x[i] >> y[i];

  rep(i, 0, n) {
    rep(j, i + 1, n) {
      ll a = abs(x[j] - x[i]) / gcd(abs(x[j] - x[i]), abs(y[j] - y[i]));
      ll b = abs(y[j] - y[i]) / gcd(abs(x[j] - x[i]), abs(y[j] - y[i]));
      if(x[j] - x[i] < 0) a = -a;
      if(y[j] - y[i] < 0) b = -b;

      ans.insert(make_pair(a, b));
      ans.insert(make_pair(-a, -b));
    }
  }

  cout << ans.size();
  return 0;
}