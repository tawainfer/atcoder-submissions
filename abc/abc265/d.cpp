// https://atcoder.jp/contests/abc265/submissions/34344197

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned int
#define ushort unsigned short
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
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  ll p, q, r;
  cin >> n >> p >> q >> r;
  ll c = 0;
  set<ll> s({0});
  rep(i, 0, n) {
    int a;
    cin >> a;
    c += a;
    s.insert(c);
  }

  fore(x, s) {
    if(s.find(x + p) != s.end() && s.find(x + p + q) != s.end() &&
       s.find(x + p + q + r) != s.end()) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
  return 0;
}
