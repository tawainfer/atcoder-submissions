// https://atcoder.jp/contests/abc199/submissions/33712078

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

  string s;
  ll n, q;
  cin >> n >> s >> q;

  ll t, a, b;
  bool rev = false;
  while(cin >> t >> a >> b) {
    a--;
    b--;
    if(a > b) swap(a, b);

    if(t == 1) {
      if(!rev) swap(s[a], s[b]);
      else {
        ll x = a;
        if(x < n) x += n;
        else x -= n;

        ll y = b;
        if(y < n) y += n;
        else y -= n;
        //cout << x << " " << y << " " << a << " " << b << endl;
        swap(s[x], s[y]);
      }
    } else rev = !rev;
  }

  if(rev) {
    rep(i, n, 2 * n) cout << s[i];
    rep(i, 0, n) cout << s[i];
  } else {
    rep(i, 0, 2 * n) cout << s[i];
  }
  return 0;
}
