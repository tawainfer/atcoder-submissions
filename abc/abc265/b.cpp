// https://atcoder.jp/contests/abc265/submissions/34211814

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

  ll n, m, t;
  cin >> n >> m >> t;

  vector<ll> a(n - 1);
  fore(z, a) cin >> z;

  set<ll> s;
  deque<ll> x(m), y(m);
  rep(i, 0, m) {
    cin >> x[i] >> y[i];
    x[i]--;
    s.insert(x[i]);
  }

  rep(i, 0, n - 1) {
    if(!x.empty() && x.front() == i) {
      t += y.front();
      x.pop_front();
      y.pop_front();
    }

    if(t - a[i] <= 0) {
      cout << "No";
      return 0;
    } else t -= a[i];
  }

  cout << "Yes";
  return 0;
}
