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
  vector<ll> cnta(46, 0), cntb(46, 0), cntc(46, 0);

  fore(z, a) {
    cin >> z;
    cnta[z % 46]++;
  }
  fore(z, b) {
    cin >> z;
    cntb[z % 46]++;
  }
  fore(z, c) {
    cin >> z;
    cntc[z % 46]++;
  }

  ll ans = 0;
  rep(i, 0, 46) rep(j, 0, 46) rep(k, 0, 46) {
    if((i + j + k) % 46 == 0) {
      ans += cnta[i] * cntb[j] * cntc[k];
    }
  }

  cout << ans;
  return 0;
}