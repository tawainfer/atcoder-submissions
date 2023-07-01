// https://atcoder.jp/contests/abc213/submissions/34506248

#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp next_permutation
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
#define ull unsigned ll
template <class T> bool chmin(T& a, T& b) { return a > b ? (a = b, 1) : 0; }
template <class T> bool chmax(T& a, T& b) { return a < b ? (a = b, 1) : 0; }
template <class T> void lower(T& a) { a = numeric_limits<T>::min(); }
template <class T> void upper(T& a) { a = numeric_limits<T>::max(); }

/*

  @tawainfer

  2021-09-04 Gray
  2022-03-19 Brown
  2022-08-27 Green

  ξ(･_･)ξ I'll do my best! ξ(･_･)ξ

*/

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll h, w, n;
  cin >> h >> w >> n;

  vector<pair<int, int>> a(n), b(n); // pos, index
  ll c, d;
  rep(i, 0, n) {
    cin >> c >> d;
    a[i] = make_pair(c, i);
    b[i] = make_pair(d, i);
  }

  sort(all(a));
  sort(all(b));

  vector<int> y(n), x(n);
  ll pos = 1;
  ll last;

  rep(i, 0, n) {
    if(i != 0 && last != a[i].first) pos++;
    y[a[i].second] = pos;
    last = a[i].first;
  }

  pos = 1;
  rep(i, 0, n) {
    if(i != 0 && last != b[i].first) pos++;
    x[b[i].second] = pos;
    last = b[i].first;
  }

  rep(i, 0, n) cout << y[i] << " " << x[i] << "\n";
  return 0;
}
