// https://atcoder.jp/contests/abc266/submissions/34402358

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  if(n == 1) cout << 3.5000000;
  else {
    double l = 3.5;

    reps(i, 2, n) {
      int cnt = 0;
      double x = 0;

      rreps(j, 6, 1) {
        if(l < j) {
          cnt++;
          x += j * (1.0 / 6.0);
        } else break;
      }
      // cout << i << " ";
      l = ((6 - cnt) / 6.0 * l) + x;
      // cout << l << endl;
    }

    cout << fix(7) << l;
  }
}
