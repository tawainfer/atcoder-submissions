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

  map<string, ll> m;
  string s;
  while(cin >> s) {
    sort(all(s));
    if(m.count(s) == 0) {
      m[s] = 1;
    } else {
      m[s]++;
    }
  }

  ll ans = 0;
  fore(z, m) {
    if(z.second >= 1) {
      ans += z.second * (z.second - 1) / 2;
    }
  }
//fore(z, m) cout << z.first << " " << z.second;
  cout << ans;
  return 0;
}