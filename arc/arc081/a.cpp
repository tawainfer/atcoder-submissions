// https://atcoder.jp/contests/abc071/submissions/32650322

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
  
  vector<ll> a(n);
  fore(z, a) cin >> z;
  sort(all(a));
  reverse(all(a));

  ll last = a[0];
  ll x = -1, y = -1;
  rep(i, 1, n) {
    if(last == -1) {
      last = a[i];
      continue;
    }
    if(last == a[i]) {
      if(x == -1) {
        x = last;
        last = -1;
        continue;
      } else if(y == -1) {
        y = last;
        cout << x * y;
        return 0;
      }
    }

    last = a[i];
  }

  cout << 0;
  return 0;
}
