// https://atcoder.jp/contests/arc126/submissions/34507274

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

  ll a, b, c;
  cin >> a;

  while(cin >> a >> b >> c) {
    ll ans = 0;
    b /= 2;

    if(b >= 1 && c >= 1) {
      ll x = min(b, c);
      ans += x;
      b -= x;
      c -= x;
    }

    if(b >= 1 && a >= 2) {
      ll x = min(b, a / 2);
      ans += x;
      b -= x;
      a -= x * 2;
    }

    if(c >= 2 && a >= 1) {
      ll x = min(c / 2, a);
      ans += x;
      c -= x * 2;
      a -= x;
    }

    if(c % 2 == 1) {
      if(a >= 3) {
        ans++;
        a -= 3;
      }
    }

    if(a >= 5) {
      ll x = a / 5;
      ans += x;
      a -= x * 5;
    }
    cout << ans << "\n";
  }

  return 0;
}
