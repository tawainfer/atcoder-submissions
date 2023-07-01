// https://atcoder.jp/contests/abc233/submissions/31600530

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define reps(i, a, b) for(ll i = a; i <= b; i++)
#define rrep(i, a, b) for(ll i = a; i > b; i--)
#define rreps(i, a, b) for(ll i = a; i > b; i--)
#define repv(i, a, b, c) for(ll i = a; i < b; i += c)
#define repsv(i, a, b, c) for(ll i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(ll i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(ll i = a; i > b; i -= c)
using namespace std;

ll n, x;
ll ans = 0;
vector<ll> sel;
vector<ll> bag[100009];

long long f(long long p, long long q) {
  double est = 1;
  est = (p);
  est *= q;
  if(est > 4e18) { return 4e18; }
  return p * q;
}

void dfs(vector<ll>& s) {
  if(s.size() == n) {
    ll pro = 1;
    fore(z, s) {
      pro = f(pro, z);
      if(pro == 4e18) break;
    }
    if(pro == x) { ans++; }
    return;
  }

  fore(z, bag[s.size()]) {
    s.push_back(z);
    dfs(s);
    s.pop_back();
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n >> x;

  ll l, a;
  rep(i, 0, n) {
    cin >> l;
    while(l--) {
      cin >> a;
      bag[i].push_back(a);
    }
  }

  dfs(sel);
  cout << ans << "\n";
  return 0;
}
