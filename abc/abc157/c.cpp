// https://atcoder.jp/contests/abc157/submissions/33724645

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

  if(n == 1 && m == 0) {
    cout << 0;
    return 0;
  }

  vector<ll> x(n, -1);
  ll s, c;
  while(cin >> s >> c) {
    s--;
    if(!(x[s] == -1 || x[s] == c) || (n != 1 && s == 0 && c == 0)) {
      cout << -1;
      return 0;
    } else {
      x[s] = c;
    }
  }

  rep(i, 0, n) {
    if(x[i] == -1) {
      if(i == 0) {
        if(n > 1) x[i] = 1;
        else x[i] = 0;
      } else x[i] = 0;
    }
    cout << x[i];
  }

  return 0;
}
