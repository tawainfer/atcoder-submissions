#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
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
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }

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

  ll n, k;
  cin >> n >> k;

  vector<ll> p(n + 1);
  reps(i, 1, n) cin >> p[i];

  vector<ll> kitai(200009);
  kitai[0] = 0;
  reps(i, 1, 200000) kitai[i] = kitai[i - 1] + i;

  vector<double> r(n + 1);
  r[0] = 0;
  reps(i, 1, n) r[i] = r[i - 1] + (kitai[p[i]] / (double)p[i]);

  double ans;
  lower(ans);

  reps(i, 1, n - k + 1) {
    double x = r[i + k - 1] - r[i - 1];
    chmax(ans, x);
  }

  cout << fix(7) << ans;
  return 0;
}