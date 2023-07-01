// https://atcoder.jp/contests/abc260/submissions/33307995

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

  ll n, x, y;
  cin >> n >> x >> y;

  ll getdb = x * y;

  if(n == 1) {
    cout << 0;
  } else {
    ll ur = 1, ub = 0;
    ll dr = 0, db = 0;
    while(n > 1) {
      while(ur > 0) {
        ur--;
        dr++;
        ub += x;
      }

      while(ub > 0) {
        ub--;
        dr++;
        db += y;
      }

      ur = dr;
      ub = db;
      dr = 0;
      db = 0;
      n--;
    }
    cout << ub;
  }

  return 0;
}
